#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d", &n);


    for (int i=1; i<n+1; i++)
    {
        if (n > 0)
        {
            printf("%d ", i);
        }        
    }

    if (n < 0 || n == 0)
    {
        do
        { 
            printf("%d ", n);
            n = n + 1;           
        }
        while(n <= 1);
    }
    
    return 0;
}