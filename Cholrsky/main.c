#include <stdio.h>
#include <stdlib.h>

void saisie(int *n);
void remplir(int n , float M[100][100]);

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
         printf("Donner la taille du matrice \n");
         scanf("%d",&x);
    }while(x<2);
    *n=x;
}
