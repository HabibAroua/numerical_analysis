#include <stdio.h>
#include <stdlib.h>

void saisie(int *n);
void remplir(int n , int M[15][15]);
void afficher(int n , int M[15][15]);
int nbZeroLigne(int n , int M[15][15] , int ligne );
int nbZeroColonne(int n , int M[15][15] , int colonne);
int rechercherLigne(int n , int M[15][15]);
int rechercherColonne(int n , int M[15][15]);
int verifInversibleLigne(int n , int M[15][15]);
int verifInversibleColone(int n , int M[15][15]);

int main()
{
    int M[15][15];
    int n,i,j;
    saisie(&n);
    remplir(n,M);
    afficher(n,M);
    printf("\n");
    printf("\n");
    if((verifInversibleLigne(n,M)==1) || (verifInversibleColone(n,M)==1))
    {
         printf("La matrice est inversible \n");
    }
    else
    {
        printf("la ligne est %d \n",rechercherLigne(n,M)+1);
        printf("la colonne est %d \n",rechercherColonne(n,M)+1);
    }

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

int nbZeroLigne(int n , int M[15][15] , int ligne)
{
     int i;
     int sum=0;
     for(i=0 ; i<n ; i++)
     {
        if(M[ligne][i]==0)
         {
              sum++;
         }
     }
     return sum;
}

int nbZeroColonne(int n , int M[15][15] , int colonne)
{
     int i;
     int sum=0;
     for(i=0 ; i<n ; i++)
     {
        if(M[i][colonne]==0)
         {
              sum++;
         }
     }
     return sum;
}

int rechercherLigne(int n , int M[15][15] )
{
   int i,indice=0;
   int max=nbZeroLigne(n,M,0);
   for(i=1 ; i<n ; i++ )
   {
       if(nbZeroLigne(n,M,i)>max)
       {
             max=nbZeroLigne(n,M,i);
             indice=i;
       }
   }
   return indice;
}

int rechercherColonne(int n , int M[15][15] )
{
   int i,indice=0;
   int max=nbZeroColonne(n,M,0);
   for(i=1 ; i<n ; i++ )
   {
       if(nbZeroColonne(n,M,i)>max)
       {
             max=nbZeroColonne(n,M,i);
             indice=i;
       }
   }
   return indice;
}

int verifInversibleLigne(int n , int M[15][15])
{
   int test,i;
   for(i=0 ; i<n ; i++ )
   {
       if(nbZeroLigne(n,M,i)==n)
       {
            test=1;
            break;
       }
       else
       {
            test=0;
       }
    }
    return test;
}

int verifInversibleColone(int n , int M[15][15])
{
   int test,i;
   for(i=0 ; i<n ; i++ )
   {
       if(nbZeroColonne(n,M,i)==n)
       {
            test=1;
            break;
       }
       else
       {
            test=0;
       }
   }
   return test;
}
