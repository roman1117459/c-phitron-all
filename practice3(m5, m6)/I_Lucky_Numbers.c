#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d",&n);

    int last = n % 10;
    int first = n / 10;

    if (last % first == 0 || first % last == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}