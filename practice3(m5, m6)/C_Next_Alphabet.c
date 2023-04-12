#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    char n;
    scanf("%c", &n);

    if (n >= 'a' && n <= 'y')
    {
        printf("%c", n+1);

    }
    else if(n == 'z')
    {
        printf("a");

    }


    return 0;
}