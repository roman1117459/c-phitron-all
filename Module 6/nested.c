#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j= 1; j <= 5; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    

    return 0;
}