#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    // char a[6]={'R','a','h','a','t'}; // no gurantee
    char a[6]="Rahat"; // gurantee
    // int sz=sizeof(a)/sizeof(char);
    // printf("%d\n",sz);
    printf("%s",a);
    return 0;
}