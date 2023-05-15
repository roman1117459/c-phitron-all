#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int x;
    scanf("%d", &x);
    
    int a[x];
    
    for(int i=0; i<x; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i=0; i<x-1; i++)
    {
        for(int j=i+1; j<x; j++)
        {
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }

    }

    int cal=x-1;
    int odd = (cal+1)/2;
    int even = cal/2;
    int even_s= (cal/2)+1;
    
    if (x%2==1)
    {
       
        printf("%d ", a[odd]);
    }
    else
    {
        printf("%d %d", a[even], a[even_s]);
    }


    // for(int i=0; i<x; i++)
    // {
    //     int even = x/2;
    //     int even_2 = (x/2)+1;
    //     int odd = (x+1)/2;
        
    //     if(x%2==0)
    //     {
    //         printf("%d %d", a[even], a[even_2]);
    //     }
    //     else
    //     {
    //         printf("%d", a[odd]);
    //     }

    // }

    

    return 0;
}