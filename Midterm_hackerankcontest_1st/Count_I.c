#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int count_even= 0;
    int count_odd= 0;
    
    for(int i=0; i<n; i++)
    {
        if(ar[i]%2==0)
        {
            count_even++;
        }
        else
        {
            count_odd++;
        }
        
    }
    printf("%d %d", count_even, count_odd);

    return 0;
}