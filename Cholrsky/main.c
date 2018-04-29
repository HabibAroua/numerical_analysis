#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void saisie(int *n);
void remplir(int n , float M[100][100]);
void afficher(int n , float M[100][100]);
void cholesky(int n , float M[100][100]);

int main()
{
    float M[100][100];
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
         printf("Donner la taille du matrice \n");
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
              printf("M[%d][%d]=",j,j);
              scanf("%f",&M[i][j]);
          }
     }
}

void afficher(int n , float M[100][100])
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

void cholesky(int n , float M[100][100])
{
    int i,j,k;
    for(i=0 ; i<n-1 ; i++)
    {
        for(k=0 ; k<i-1 ; k++)
        {
             M[i][i]=sqrt(M[i][i]-M[i][k]*M[i][k])
        }
    }
}
