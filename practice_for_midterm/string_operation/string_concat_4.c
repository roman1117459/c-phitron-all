#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    char a[200], b[100];
    scanf("%s %s", a, b);
    //Manual approach
    // int k=strlen(a);

    // for(int i=0; i<=strlen(b); i++)
    // {
    //     a[k]=b[i];
    //     k++;
    // }
    // printf("%s %s", a, b);

    //builtin approach
    
    strcat(a,b);
    printf("%s %s",a,b);
    
    return 0;
}