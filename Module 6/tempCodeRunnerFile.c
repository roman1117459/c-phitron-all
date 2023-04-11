#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i; i <= n; i++)
    {
        int a;
        scanf("%d", &a);
        do
        {
            /* code */
            printf("%d ", a % 10);
            a = a / 10;

        }
        while (a != 0);
        printf("\n");
    }
    
    return 0;
}