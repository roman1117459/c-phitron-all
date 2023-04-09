#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    
    int x;
    scanf("%d",&x);
    int digit=x/1000;
    if(digit%2==0)
    {
        printf("EVEN\n");
    }
    else 
    {
        printf("ODD\n");
    }


    return 0;
}