#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    
    int n;
    scanf("%d", &n);
    int a[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=n-1; i>=0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}