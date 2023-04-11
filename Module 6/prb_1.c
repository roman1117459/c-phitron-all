#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int a;

    scanf("%d", &a);

    for (int i= 1; i <= a; i++){
        if (i % 2 == 0){
            printf("%d\n", i);
        }
        else if (i == 1){
            printf("-1");
        }
    }


    return 0;
}