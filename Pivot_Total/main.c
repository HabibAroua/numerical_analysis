#include <stdio.h>
#include <stdlib.h>

void saisie(int *n);
void remplir(int n , float M[100][100]);
void bR(int n , float *b);
void affiche(int n , float M[100][100]);
void afficheX(int n , float X[100]);
void Pivot_total(int n , float M[100][100] , float b[100] , float *X);
float abc(float n);

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
    int i,r,l,c,j;
    float max;
    int v[100];
    for (i=0 ; i<n ; i++)
    {
         v[i]=i;
    }

    for(r=0 ; r<n-1 ; r++)
    {
        max=0;
        l=0;
        c=0;

        for(i=r ; i<n ; i++)
        {
             for(j=r ; j<n ; j++)
             {
                  if(abc(M[i][j])>max)
                  {
                  }
             }
        }

    }
}

float abc(float n)
{
    if(n<0)
    {
         n*=-1;
         return n;
    }
    else
    {
         return n;
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
