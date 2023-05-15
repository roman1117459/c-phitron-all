#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    char s[1001];
    fgets(s, 1001, stdin);

    int cap=0, sml=0, spa=0;

    for(int i=0; i<strlen(s);i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            cap++;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            sml++;
        }
        else
        {
            spa++;
        }
    }

    printf("Capital - %d\nSmall - %d\nSpaces - %d", cap, sml, spa);

    return 0;
}