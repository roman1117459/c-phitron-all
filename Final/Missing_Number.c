#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    // int a, b, c, d;
    // scanf("%d %d %d %d", &a, &b, &c, &d);
    // printf("%d", a/(b*c*d));
    int n, a, b, c, d;
    scanf("%d", &n);

    while(scanf("%d %d %d %d", &a, &b, &c, &d) != EOF)
    {
        printf("%d\n", a-(b+c+d));
    }

    return 0;
}