#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    for(int i=n; n!=0; i--)
    {
        printf("%d ", n%10);
        n = n/10;
    }

    return 0;
}