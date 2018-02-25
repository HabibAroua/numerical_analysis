#include <stdio.h>
#include <stdlib.h>

void saisie(int *n);
void remplir(int n , float A[100][100]);
void LU(int n , float A[100][100]);

int main()
{

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

}
void LU(int n , float A[100][100])
{

}
