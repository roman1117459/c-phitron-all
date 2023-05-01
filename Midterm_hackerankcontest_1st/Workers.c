#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int m1, m2, d;

    scanf("%d %d %d", &m1, &m2, &d);

    int ans;
    
    if(m2 == 1)
    {
        ans= m1 * d; 
    }
    else
    {
        ans= m1 * d / m2;
    }

    printf("%d", ans);


    return 0;
}