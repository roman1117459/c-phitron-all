#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int arr[10];


    for (int i= 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);

    }
    for (int i= 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}