#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int arr[5];


    for (int i= 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);

    }
    for (int i= 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}