#include <stdio.h>
#include <stdlib.h>

void saisie(int *n);
void remplirA(int n , int A[100][100]);
void remplirB(int n , int B[100]);
void AfficherA(int n , int A[100][100]);
void AfficherB(int n , int B[100]);

int main()
{
    int n;
    float A[100][100],B[100],X[100];
    saisie(&n);
    remplirA(n,A);
    remplirB(n,B);
    AfficherA(n,A);
    printf("\n");
    AfficherB(n,B);
    return 0;
}

void saisie(int *n)
{
    int x;
    do
    {
         printf("Donner la taille \n");
         scanf("%d",&x);
    }while(x<2);
    *n=x;
}

void remplirA(int n , int A[100][100])
{
     int i,j;
     for(i=0 ; i<n ; i++)
     {
          for(j=0 ; j<n ;j++)
          {
              printf("A[%d][%d]\n",i,j);
              scanf("%d",&A[i][j]);
          }
     }
}

void remplirB(int n , int B[100])
{
    int i;
    for(i=0 ; i<n ; i++)
    {
        printf("Tapez la case %d \n",i);
        scanf("%d",&B[i]);
    }
}

void AfficherA(int n , int A[100][100])
{
    int i,j;
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}

void AfficherB(int n , int B[100])
{
    int i;
    for(i=0 ; i<n ; i++)
    {
        printf("%d ",B[i]);
    }
}
