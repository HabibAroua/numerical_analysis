#include <stdio.h>
#include <stdlib.h>

void saisie(int *n);
void remplir(int n , int M[100][100]);
void affiche(int n , int M[100][100]);
void Gauss(int n , int M[100][100]);

int main()
{
    int n;
    int M[100][100];
    saisie(&n);
    remplir(n,M);
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
