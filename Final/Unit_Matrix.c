#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int a;
    scanf("%d",&a);

    int x[a][a];

    for(int i=0; i<a; i++)
    {
        for(int j=0; j<a; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }    

    int flag=1;

    for(int i=0; i<a; i++)
    {
        for(int j=0; j<a; j++)
        {
            if(i==j && x[i][j]!=1)
            {
                flag=0;
                break;
            }
            else if(i!=j && x[i][j]!=0)
            {
                flag=0;
                break;
            }
        }
        
    }

    if(flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    // for(int i=0; i<a; i++)
    // {
    //     for(int j=0; j<a; j++)
    //     {
    //         printf("%d ", x[i][j]);
    //     }
    //     printf("\n");
    // } 


    return 0;
}