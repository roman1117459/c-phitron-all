#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    
    int a;
    scanf("%d", &a);

    int z = a / 1000;

    if (z % 2 == 0){
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

    return 0;
}