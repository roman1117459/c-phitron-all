// #include <stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #include<math.h>

// int main()
// {
//     char a;

//     scanf("%c", &a);

//     if (a >= 48 && a <= 56)
//     {
//         printf("DIGIT");
//     }
//     else if (a >= 65 && a <= 90) 
//     {
//         printf("ALPHA\n");
//         printf("IS CAPITAL\n");
//     }
//     else if (a >= 97 && a <= 122)
//     {
//         printf("ALPHA\n");
//         printf("IS SMALL\n");

//     } 



//     return 0;
// }

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    char x;
    scanf("%c", &x);

    if ( x >= '0' && x <= '9')
    {

        printf("DIGIT");
    }
    else 
    {
        printf("ALPHA\n");
        if ( x >= 'A' && x <= 'Z')
        {
            printf("IS CAPITAL\n");

        }
        else
        {
            printf("IS SMALL\n");
        }



    }
    return 0;
}
