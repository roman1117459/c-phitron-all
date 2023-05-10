#include<stdio.h>
int main()
{

    int x;
    scanf("%d",&x);
    // declare 2d array
    int a[x][x];
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            scanf("%d",&a[i][j]);
        }
    } 

    int first=0;
    int second=0;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            if(i==j)
            {
                first+=a[i][j];
            }
            if(i+j==x-1)
            {
                second+=a[i][j];
            }
        }
    }
    

    int answer=first-second;
    if(first > second)
    {
        printf("%d",answer);
    }
    else
    {
        printf("%d",answer*-1);
    }

    //just testing taking 2d array or not
    // for(int i=0;i<x;i++)
    // {
    //     for(int j=0;j<x;j++)
    //     {
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // } 

    return 0;
}

