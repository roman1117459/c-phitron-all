#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    char a[100];
    fgets(a,19,stdin);
    
    a[17]='\0';

    printf("%s",a);


    return 0;
}