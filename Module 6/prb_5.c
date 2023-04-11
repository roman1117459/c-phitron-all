#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (int i =1; i <= 12; i++)

    {
        printf("%d * %d = %d\n", n, i, n*i);
    }

    return 0;
}