#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    long long int e, m, b, res=0;
    scanf("%lld %lld %lld", &e, &m, &b);
    
    if(e == 0 || b == 0)
    {
        printf("0\n");
    }
    else
    {
        long long int min = e;
        if(m < min)
        {
            min = m;
        }
        if(b < min)
        {
            min = b;
        }
        e -= min;
        m -= min;
        b -= min;
        res += min;

        if (e/2 < b)
        {
            res += e/2;
        }
        else
        {
            res += b;
        }
    printf("%lld", res);
    }


    return 0;
}