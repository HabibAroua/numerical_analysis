#include <stdio.h>
#include <stdlib.h>

void saisie(int *n);
void remplir(int n , int M[100][100]);
void bR(int n , int b[100]);
void affiche(int n , int M[100][100]);
void Gauss(int n , int M[100][100] , int b[100]);

int main()
{
    int n;
    int M[100][100],b[100];
    saisie(&n);
    remplir(n,M);
    bR(n,b);
    affiche(n,M);

    return 0;
}

void saisie(int *n)
{
    int x;
    do
    {
        printf("Donner la taille de la matrice \n");
        scanf("%d",&x);
    }while(x<3);
    *n=x;
}

void remplir(int n , int M[100][100])
{
    int i,j;
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<i ; j++)
        {
             printf("Tapez la ligne %d et la colonne %d \n",i,j);
             scanf("%d",&M[i][j]);
        }
    }
}

void bR(int n , int b[100])
{
}

void affiche(int n , int M[100][100])
{
    int i,j;
    for(i=0 ; i<n ; i++)
    {
         for(j=0 ; j<i ; j++)
         {
             printf("%d ",M[i][j]);
         }
         printf("\n");
    }
}

void Gauss(int n , int M[100][100] , int b[100])
{
   int i,j,aux,indice;
   int compt;
   for(i=0 ; i<n-1 ; i++)
   {
       while(M[compt][i]==0)
       {
            compt++;
       }
       for(j=0 ; j<n ; j++)
       {
            aux=M[i][j];
            M[i][j]=M[compt][j];
            M[compt][j]=aux;
       }
       aux=b[i];
       b[i]=b[compt];
       b[compt]=aux;

       for(indice=compt+1 ; compt<n ; indice++)
       {
           for(j=i ; j<n ; j++)
           {
                M[i][j]=M[i][j]-(M[indice][i]*M[i][j]/M[i][i]);
           }
           b[i]=b[i]-(b[indice]*b[bi]/M[i][i]);
           M[indice][i]=0;
       }
   }
   int X[100];
}
