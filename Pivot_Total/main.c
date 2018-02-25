#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void saisie(int *n);
void remplir(int n , float M[100][100]);
void bR(int n , float *b);
void affiche(int n , float M[100][100]);
void afficheX(int n , float X[100]);
void Pivot_total(int n , float M[100][100] , float b[100] , float *X);
float absF(float n);
void permuterFloat(float x , float y);

int main()
{
    int n;
    float M[100][100],b[100],X[100];
    //pour lire n M et b
    saisie(&n);
    remplir(n,M);
    bR(n,b);
    affiche(n,M);
    printf("\n");


    Pivot_total(n,M,b,X);
    printf("\n");
    afficheX(n,X);

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

void remplir(int n , float M[100][100])
{
    int i,j;
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
             printf("Tapez la ligne %d et la colonne %d \n",i+1,j+1);
             scanf("%f",&M[i][j]);
        }
    }
}

void bR(int n , float b[100])
{
    int i;
    for(i=0 ; i<n ;i++)
    {
        printf("Donner X%d \n",i+1);
        scanf("%f",&b[i]);
    }
}

void affiche(int n , float M[100][100])
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

void Pivot_total(int n , float M[100][100] , float b[100] , float X[100])
{
    int i,r,l,c,j,indice,compt;
    float max,aux,I,m;
    int v[100];
    for (i=0 ; i<n ; i++)
    {
         v[i]=i;
    }

    for(r=0 ; r<n-1 ; r++)
    {
        max=0;
        l=0;
        c=0;

        for(i=r ; i<n ; i++)
        {
             for(j=r ; j<n ; j++)
             {
                  if(abs(M[i][j])>max)
                  {
                       max=abs(M[i][j]);
                       l=i;
                       c=j;
                  }
             }
        }
        for(j=r ; j<n ; j++)
        {
             aux=M[r][j];
             M[r][j]=M[l][j];
             M[l][j]=aux;
        }
        I=b[r];
        b[r]=b[l];
        b[l]=I;
        for(i=0 ; i<n ; i++)
        {
            aux=M[i][r];
            M[i][r]=M[i][c];
            M[i][c]=aux;
        }
        indice=v[r];
        v[r]=v[c];
        v[c]=indice;
        for(i=compt+1 ; i<n ; i++)
        {
            m=M[i][r]/M[r][r];
            for(j=r+1 ; j<n ; j++)
            {
               M[i][j]=M[i][j]-(m*M[r][j]);
            }
            b[i]=b[i]-(m*b[r]);
            M[i][r]=0;
        }
        affiche(n,M);
    }
    X[v[n]-1]=b[v[n]-1]/M[n-1][n-1];
    for(i=n-1 ; i>=0 ; i--)
    {
       X[v[i]]=b[i];
       for(j=i+1 ; j<n ; j++)
       {
           X[v[i]]=X[v[i]]-M[i][j]*X[v[j]];
       }
       X[v[i]]=X[v[i]]-(M[i][j]*X[v[j]]);
    }
}

float absF(float n)
{
    if(n<0)
    {
         n*=-1;
         return n;
    }
    else
    {
         return n;
    }
}


void afficheX(int n , float X[100])
{
    int i;
    for(i=0 ; i<n ; i++)
    {
         printf("X(%d)= %f \n ",i+1,X[i]);
    }
}

void permuterFloat(float x , float y)
{
    int aux=x;
    x=y;
    y=aux;
}
