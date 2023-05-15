#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int a, b;
    scanf("%d %d",&a, &b);

    int x[a][b];

    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }    

    //exact row

    for(int i=0; i<b; i++)
    {
        printf("%d ", x[a-1][i]);
    }

    //exact column
    printf("\n");
    for(int i=0; i<a; i++)
    {
        printf("%d ", x[i][b-1]);
    }

    // for(int i=0; i<a; i++)
    // {
    //     for(int j=0; j<b; j++)
    //     {
    //         printf("%d ", x[i][j]);
    //     }
    //     printf("\n");
    // }
    


    return 0;

}