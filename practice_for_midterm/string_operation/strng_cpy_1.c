#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    char a[100], b[100];

    scanf("%s %s", a, b);
    
    //prebuiltin  func
    // strcpy(a, b);

    //This can be done by for loop
    for(int i=0; i<=strlen(b); i++)
    {
        a[i]= b[i];
    }


    printf("%s %s", a, b);


    return 0;
}