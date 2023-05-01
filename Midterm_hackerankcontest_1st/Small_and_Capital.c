#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    char wrd[1001];
    scanf("%s", wrd);

    int count_sm= 0;
    int count_cap= 0;

    for(int i=0; i<strlen(wrd); i++)
    {
        if(wrd[i] >= 'a' && wrd[i] <='z')
        {
            count_sm++;
        }
        else if(wrd[i] >='A' && wrd[i] <= 'Z')
        {
            count_cap++;
        }
    }
    
    printf("%d %d", count_cap, count_sm);

    return 0;
}