#include <stdio.h>
#include <stdlib.h>

void saisie(int *n);
void remplirA(int n , float A[100][100]);
void remplirB(int n , float B[100]);
void AfficherA(int n , float A[100][100]);
void AfficherB(int n , float B[100]);

int main()
{
    int n;
    float A[100][100],B[100],X[100];
    //REad n , A , B
    saisie(&n);
    remplirA(n,A);
    remplirB(n,B);
    AfficherA(n,A);
    printf("\n");
    AfficherB(n,B);
    printf("\n");
    //Operation
    X[0]=B[0]/A[0][0];

    int i,j;
    for(i=n-2 ; i=0 ; i-- )
    {
        X[i]=B[i];
        for(j=i+1 ; j<n ; j++)
        {
            X[i]-=(A[i][j]*X[j]);
        }
        X[i]/=A[i][i];
    }
    //Show X
    for(i=0 ; i<n ; i++)
    {
       printf("%f ",X[i]);
    }
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

void remplirA(int n , float A[100][100])
{
     int i,j;
     for(i=0 ; i<n ; i++)
     {
          for(j=0 ; j<n ;j++)
          {
              printf("A[%d][%d]\n",i,j);
              scanf("%f",&A[i][j]);
          }
     }
}

void remplirB(int n , float B[100])
{
    int i;
    for(i=0 ; i<n ; i++)
    {
        printf("Tapez la case %d \n",i);
        scanf("%f",&B[i]);
    }
}

void AfficherA(int n , float A[100][100])
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

void AfficherB(int n , float B[100])
{
    int i;
    for(i=0 ; i<n ; i++)
    {
        printf("%f ",B[i]);
    }
}
