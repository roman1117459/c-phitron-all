#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{

    char a[100];
    scanf("%s",a);
    //for loop trick

    // int count= 0;
    
    // for(int i=0; a[i]!='\0';i++)
    // {
    //     count++;
    // }

    //while loop trick

    int count=0;
    int i=0;

    while(a[i]!='\0')
    {
        count++;
        i++;
    }

    printf("%d\n",count);
    
    return 0;
}


// {
//     char a[100];
//     gets(a);
//     int st = strlen(a);
//     printf("%d\n",st);

//     return 0;
// }