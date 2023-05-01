#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int ar[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }
    
    int x;
    scanf("%d", &x);

    int tar = 0;

    for(int i=0; i < n ; i++)
    {
        if(ar[i]==x)
        {
            tar++;
        }
    }
    printf("%d", tar);

    return 0;
}