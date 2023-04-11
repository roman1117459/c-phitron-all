// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #include<math.h>
// #include<limits.h>

// int main()
// {
    
//     int n;
//     scanf("%d", &n);
//     int x, max= 0;
//     for (int i=1; i<=n; i++){

//         scanf("%d", &x);

//         if (x>max)
//         {
//             max=x;        
//         }     
//     }

//     printf("%d\n", max);  

//     return 0;
// }

// This is for if there is no limitations for minimum and maximum

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{

    int n;
    scanf("%d", &n);

    int a, max = INT_MIN, min = INT_MAX;

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);

        if(a > max)
        {
            max = a;
        }
        else if (a < min)
        {
            min = a;

        }

    }

    printf("%d %d", min, max);


    return 0;
}