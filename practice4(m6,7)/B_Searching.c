#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    
    int n;
    scanf("%d", &n);
    int a[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    int x;
    scanf("%d",&x);
    
    int ans = -1;
    for (int i=0; i<n; i++)
    {

        if(a[i]==x)
        {
            ans = i;
            break;
        }
    }
    printf("%d", ans);

    return 0;

}