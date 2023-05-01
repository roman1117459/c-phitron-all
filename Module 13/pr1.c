#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d",&n);
    int k=n;
    
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=k;j++)
        {
            printf("*");
        } 
        k--;
        printf("\n");
    
    }
    // for(int i=n;i>=1;i--)
    // {
    //     for(int j=k; j<=k; j--)
    //     {
    //         printf("*");
    //     }
    //     k--;
    //     printf("\n");

    // }

    // for(int i=1;i<=n;i++)
    // {
    //    for(int j=k;j>=1;j--)
    //     {
    //         printf("*");
    //     } 
    //     k--;
    //     printf("\n");
    
    // }

    return 0;
}