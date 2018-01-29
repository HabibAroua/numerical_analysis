#include <stdio.h>
#include <stdlib.h>

void saisie(int *n);
void remplir(int n , int M[15][15]);
void afficher(int n , int M[15][15]);

int main()
{
    printf("Hello world!\n");
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
}

void afficher(int n , int M[15][15])
{
}
