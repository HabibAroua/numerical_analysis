#include <stdio.h>
#include <stdlib.h>

void saisie(int *n);
void remplir(int n , int M[15][15]);
void afficher(int n , int M[15][15]);

int main()
{
    int M[15][15];
    int n;
    saisie(&n);
    remplir(n,M);
    afficher(n,M);
    return 0;
}

void saisie(int *n)
{
   int x;
   do
   {
       printf("Donner la taille de matrice \n");
       scanf("%d",&x);
   }while(x<2);
   *n=x;
}

void remplir(int n , int M[15][15])
{
     int i,j;
     for(i=0 ; i<n ; i++)
     {
          for(j=0 ; j<n ; j++)
          {
               printf("Donner la ligne %d et la colonne %d \n",i+1,j+1);
               scanf("%d",&M[i][j]);
          }
     }
}

void afficher(int n , int M[15][15])
{
     int i,j;
     for(i=0 ; i<n; i++)
     {
          for(j=0 ; j<n ; j++)
          {
               printf("%d ",M[i][j]);
          }
          printf("\n");
     }
}
