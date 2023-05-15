#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int a;
    scanf("%d", &a);

    int s=a-1, k=1;

    for(int i=0; i<a; i++)
    {
        for(int j=1; j<=s; j++)
        {
            printf(" ");
        }

        for(int j=1; j<=k; j++)
        {
            if(i%2==0)
            {
                printf("^");
            }
            else
            {
                printf("*");
            }
            
        }

        printf("\n");
        s--;
        k+=2;
        
    }
    
    return 0;
}