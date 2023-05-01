#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    for(int k=0; k<m; k++)
    {
        for(int i=1; i<=n; i++)
            {
                printf("%d ", i);
            }
        printf("\n");
    }

    return 0;
}