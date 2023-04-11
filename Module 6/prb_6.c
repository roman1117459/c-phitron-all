#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i= 1; i <= n; i++)
    {
        int a;
        scanf("%d", &a);
        do
        {
            /* code */
            printf("%d ", a % 10);
            a = a / 10;

        }
        while (a != 0);
        printf("\n");
    }
    
    return 0;
}

// #include<stdio.h>
// int main()
// {
//     int test;
//     scanf("%d",&test);
//     for(int t=1;t<=test;t++)
//     {
//         int n;
//         scanf("%d",&n);
//         do
//         {
//             printf("%d ",n%10);
//             n=n/10;
//         }
//         while(n!=0);
//         printf("\n");
//     }
//     return 0;
// }