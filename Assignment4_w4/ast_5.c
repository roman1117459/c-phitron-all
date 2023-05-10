#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>


int check_palin(char *a)
{
    int count=0, i;
    int x=strlen(a);
    for(i=0; i<x/2; i++)
    {
        if(a[i]==a[x-i-1])
        {
            count++;
        }
    }

    printf("%d\n", i);
    printf("%d", count);


    // if(count==i)
    // {
    //     return 1;
    // }
    // else
    // {
    //     return 0;
    // }

}

int main()
{
    char a[11];
    gets(a);
    check_palin(a);

    // if(check_palin(a))
    // {
    //     printf("Palindrome");
    // }
    // else
    // {
    //     printf("Not Palindrome");
    // }
    return 0;
}


// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #include<math.h>
// #include<limits.h>


// int main()
// {
//     int count=4, i;
//     int n=4;
//     for(i=0; i<n;i++)
//     {
//         printf("Bangladesh joy bangla\n");
//     }
//     if(count==i)
//     {
//         printf("shonar bangla");
//     }
//     else
//     {
//         printf("gu er gamla");
//     }
//     return 0;
// }