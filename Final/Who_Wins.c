#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int z, x, y;
    scanf("%d", &z);
    
    int tig=0, pat=0;

    for(int i=0; i<z; i++)
    {
        scanf("%d %d", &x, &y);
        if(x>y)
        {
            tig++;
        }
        else if(x<y)
        {
            pat++;
        }
    }

    if(tig < pat)
    {
        printf("Pathan");
    }
    else if(tig > pat)
    {
        printf("Tiger");
    }
    else
    {
        printf("Draw");
    } 

    // int tig=0;
    // int pat=0;
    // while(scanf("%d %d", &x, &y) != EOF)
    // {
    //     if(x>y)
    //     {
    //         tig++;
    //     }
    //     else if(x<y)
    //     {
    //         pat++;
    //     }
    // }

    // if(tig < pat)
    // {
    //     printf("Pathan");
    // }
    // else if(tig > pat)
    // {
    //     printf("Tiger");
    // }
    // else
    // {
    //     printf("Draw");
    // }

    return 0;
}