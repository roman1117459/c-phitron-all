#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    
    char a;
    scanf("%c", &a);
    
    if (a >= 'A' && a <= 'Z'){
        a += 32;
        printf("%c", a);
    }
    else {
        a -= 32;
        printf("%c", a);
    }



    return 0;
}