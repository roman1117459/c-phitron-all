#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    char s[100];
    scanf("%s",s);
    int cnt[26]={0};
    for(int i=0;i<strlen(s);i++)
    {
        int value = s[i]-'a';
        cnt[value]++;
    }
    for(int i=0;i<strlen(s);i++)
    {
        int value=s[i]-97;
        if(cnt[value]!=0)
        {
            printf("%c - %d\n",value+'a',cnt[value]);
        }
        cnt[value]=0;
    }

    return 0;
}