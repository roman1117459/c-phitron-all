#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    
    int a, k, s;
    scanf("%d",&a);
    
    s=a-1;
    k=1;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        s--;
        k+=2;
        printf("\n");    
    }


    return 0;
}