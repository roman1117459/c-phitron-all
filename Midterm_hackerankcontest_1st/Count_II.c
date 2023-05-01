#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    
    char wrd[1000];
    scanf("%s", wrd);

    
    int vowel= 0;
    for(int i= 0; i<strlen(wrd); i++)
    {   
        if(wrd[i]=='a' || wrd[i]=='e' || wrd[i]=='i' || wrd[i]=='o' || wrd[i]=='u')
        {
            vowel++;
        }
    }
    printf("%d", vowel);

    return 0;
}