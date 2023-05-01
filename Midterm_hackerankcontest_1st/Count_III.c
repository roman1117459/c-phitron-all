#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    char wrd[1001];
    scanf("%s", wrd);

    int cnt[26]={0};
    
    for(int i=0; i<strlen(wrd); i++)
    {
        int value= wrd[i] - 97;
        cnt[value]++;
    }

    for(int i=0; i<26; i++)
    {
        printf("%c - %d\n", i+97, cnt[i]);
    }


    return 0;
}