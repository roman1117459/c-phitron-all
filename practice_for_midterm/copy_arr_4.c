#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    int arr[n];
    //initializing my arr values
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int x; 
    scanf("%d",&x);
    int ar[x];

    for(int i=0; i<x; i++)
    {
        scanf("%d", &ar[i]);
    }

    //new array initialize done
    int ans[n+x];

    for (int i=0; i<n; i++)
    {
        ans[i]=arr[i];
    }

    //just initialize a new variable with n the size of 2nd array. and then call a loop and ask for replace the new value to new array ans by pos of first value and increase it by 1 +++
    int k=n;
    
    for(int j=0; j<x; j++)
    {
        ans[k]=ar[j];
        k++;
    }
    

    for(int i=0; i<n+x; i++)
    {
        printf("%d ",ans[i]);
    }

    return 0;
}