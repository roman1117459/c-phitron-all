// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #include<math.h>
// #include<limits.h>

// int main()
// {
    
//     int n, a;
//     scanf("%d", &n);
//     long long int sum=0;
//     for(int i=0;i<n;i++)
//     {
        
//         scanf("%d",&a);
//         sum += a;
//     }

//     printf("%lld", abs(sum));

//     return 0;
// }


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

    long long int sum = 0;

    for(int i=0;i<n;i++)
    {
        scanf("%d", &ar[i]);
    }

    for(int i=0; i<n; i++)
    {
        sum = sum + ar[i];
    }

    if (sum<0)
    {
        printf("%lld",sum * (-1));
    }
    else
    {
        printf("%lld",sum);
    }


    return 0;
}