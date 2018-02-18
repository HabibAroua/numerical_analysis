#include <stdio.h>
#include <stdlib.h>

void saisie(int *n);
void remplir(int n , float M[100][100]);
void bR(int n , float *b);
void affiche(int n , float M[100][100]);
void afficheX(int n , float X[100]);
void Pivot_total(int n , float M[100][100] , float b[100] , float *X);

int main()
{
    int n;
    float M[100][100],b[100],X[100];
    //pour lire n M et b
    saisie(&n);
    remplir(n,M);
    bR(n,b);
    affiche(n,M);
    printf("\n");


    Pivot_total(n,M,b,X);
    printf("\n");
    afficheX(n,X);

    return 0;
}

void saisie(int *n)
{
    int x;
    do
    {
        printf("Donner la taille de la matrice \n");
        scanf("%d",&x);
    }while(x<2);
    *n=x;
}

void remplir(int n , float M[100][100])
{
    int i,j;
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
             printf("Tapez la ligne %d et la colonne %d \n",i+1,j+1);
             scanf("%f",&M[i][j]);
        }
    }
}

void bR(int n , float b[100])
{
    int i;
    for(i=0 ; i<n ;i++)
    {
        printf("Donner X%d \n",i+1);
        scanf("%f",&b[i]);
    }
}

void affiche(int n , float M[100][100])
{
    int i,j;
    for(i=0 ; i<n ; i++)
    {
         for(j=0 ; j<n ; j++)
         {
             printf("%f ",M[i][j]);
         }
         printf("\n");
    }
}

void Pivot_total(int n , float M[100][100] , float b[100] , float X[100])
{
   int r,i,j,compte;
   float aux,m;

   for(r=0 ; r<n-1 ; r++)
   {
       compte=r;
       while(M[compte][r]==0)
       {
            compte++;
       }
       for(j=r ; j<n ; j++)
       {
           aux=M[r][j];
           M[r][j]=M[compte][j];
           M[compte][j]=aux;
       }
       aux=b[r];
       b[r]=b[compte];
       b[compte]=aux;

       for(i=compte+1 ; i<n ; i++)
       {
            m=M[i][r]/M[r][r];
            for(j=r+1 ; j<n ; j++)
            {
                 M[i][j]=M[i][j]-m*M[r][j];
            }
            b[i]=b[i]-m*b[r];
            M[i][r]=0;
       }
       affiche(n,M);
       printf("\n");
   }

   X[n-1]=b[n-1]/M[n-1][n-1];
   for(i=n-2 ; i>=0 ; i--)
   {
       X[i]=b[i];
       for(j=i+1 ; j<n ; j++)
       {
           X[i]=X[i]-M[i][j]*X[j];
       }
       X[i]=X[i]/M[i][i];
   }

}

void afficheX(int n , float X[100])
{
    int i;
    for(i=0 ; i<n ; i++)
    {
         printf("X(%d)= %f \n ",i+1,X[i]);
    }
}
