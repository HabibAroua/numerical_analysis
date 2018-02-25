#include <stdio.h>
#include <stdlib.h>

void saisie(int *n);
void remplir(int n , float A[100][100]);
void LU(int n , float A[100][100]);
void affichier(int n , float A[100][100]);
float sum();

int main()
{
    int n;
    float A[100][100];
    saisie(&n);
    remplir(n,A);
    affichier(n,A);

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

void remplir(int n , float A[100][100])
{
    int i,j;
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            printf("A[%d][%d]=\n",i+1,j+1);
            scanf("%f",&A[i][j]);
        }
    }
}

void LU(int n , float A[100][100])
{
    int i,j,k;
    int P[100];
    float pivot;
    for(i=0 ; i<n ; i++)
    {
        P[i]=i;
    }
    for(i=0 ; i<n-1 ;i++)
    {
        k=i;
        //while(pivot=)
    }
}

void affichier(int n , float A[100][100])
{
    int i,j;
    for(i=0 ; i<n ; i++)
    {
         for(j=0 ; j<n ; j++)
         {
               printf("%f ",A[i][j]);
         }
         printf("\n");
    }
}

