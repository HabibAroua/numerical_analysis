#include <stdio.h>
#include <stdlib.h>

/*void RSTI(int v[5050], int b[100], int x[100])
{
    int n;

    for (i=1;i<=n; i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("donnez A[%d][%d]", i, j);
            scanf("%d", &V[(i*(i+1))/2+j]);
        }
    }
    x[1] = b[1]/v[1];
    for (i=2; i<=n;i++)
    {
        x[i] = b[i];
        for(j=1;j<=i-1;j++)
        {
            x[i] = x[i] - v[((i*(i-1))/2) + j] * x[j];
        }
        x[i] = x[i]/v[((i*(i+1)/2)];
        printf("%d", x[i]);
    }

}*/

void Remplissage_tab(int n, int b[100])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("donnez la valeur de la case %d \n", i);
        scanf("%d", &b[i]);
    }
}
void Remplissage_mat(int n, int b[100][100])
{
    int i;
    int j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("donnez la valeur de la case  %d %d \n", i, j);
            scanf("%d", &b[i][j]);
        }

    }
}
void Affichage_tab(int n, int b[100])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("La valeur de la case %d est %d", i, b[i]);
    }
}
void Affichage_mat(int n,int b[100][100])
{
    int i, j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("La valeur de la case %d %d est %d", i, j, b[i][j]);
        }

    }
}
void Gauss(int n, int A[100][100], int b[100], int x[100])
{
    int compt;
    int aux;
    int i,j,r;

    compt = 0;

    n = 0;
    printf("donnez n \n");
    scanf("%d", &n);

    Remplissage_mat(n,A);
    Remplissage_tab(n,b);

    for(r=0;r<(n-2);r++)
    {
        compt = r;
        while(A[compt][r]==0)
        {
            compt = compt++;
        }
        for(j=r;j<n;j++)
        {
            aux = A[r][j];
            A[r][j] = A[compt][j];
            A[compt][j] = aux;
        }

        aux = b[r];
        b[r] = b[compt];
        b[compt] = aux;
    }
    for(i=compt+1;i<n;i++)
    {
        for(j=r+1;j<n;j++)
        {
            A[i][j] = A[i][j] - (A[i][r]*A[r][j])/A[r][r];
        }
        b[i] = b[i] - ((A[i][r]*b[r])/A[r][r]);
        A[i][r] = 0;
        //Afficher A et b;
        Affichage_mat(n,A);
        Affichage_tab(n,b);

    }
    x[n] = b[n]/A[n][n];
    for(i=n-2;i=0;i=-1)
    {
        x[i] = b[i];
        for(j=i+1;j<n;j++)
        {
            x[i] = x[i] - A[i][j]*x[j];
        }
        x[i] = x[i]/A[i][i];
    }
    //Ecrire x;
    Affichage_tab(n,x);
}

int main()
{
    int A[100][100];
    int   b[100];
    int x[100];
    int n;
    Gauss(n,A,b,x);

}
