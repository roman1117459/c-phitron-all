#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a, even = 0, odd = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a%2 == 0)
        {
            even = even + a;
        }
        else
        {
            odd = odd + a;
        }
    }
    printf("%d %d", even, odd);

    return 0;
}