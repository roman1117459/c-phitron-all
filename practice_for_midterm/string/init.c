#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    //char game[6]={'R', 'A', 'T', 'U', 'L'};
    char game[6]="Ratul";

    // printf("%s", game); 

    for(int i=0; i<5; i++)
    {
        printf("%c\n",game[i]);
    }

    return 0;
}