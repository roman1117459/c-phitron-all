#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int a;

    while (scanf("%d", &a) != EOF)
    {
        if (a == 1999)
        {
            printf("Correct\n");
            break;
        }
        else{
            printf("Wrong\n");
        }
    }




    return 0;
}