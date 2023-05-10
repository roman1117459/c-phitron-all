#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int a,k;
    scanf("%d",&a);
    k=a;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<k; j++)
        {
            printf("*",i);
        }
        k--;
        printf("\n");
    }


    return 0;
}