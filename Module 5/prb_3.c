#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    
    char a;
    scanf("%c",&a);
    if(a>='a' && a<='z')
    {
        // choto hater
        int ans=a-32;
        printf("%c",ans);
    }
    else 
    {
        int ans=a+32;
        printf("%c",ans);
    }


    return 0;
}