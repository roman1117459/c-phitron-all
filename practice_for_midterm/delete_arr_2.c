#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+1];
    //initializing my arr values
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int pos;
    scanf("%d",&pos);

    //for processing
    for(int i=pos; i<n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    //for printing without extra loop
    for(int i=0; i<n-1; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}