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

    int i=0, j=n-1;
    //so the thing is i have to use 2 pointer while i less then j cause of even numbersss
    while(i<j)
    {
        int tmp=arr[i];
        arr[i]=arr[j];
        arr[j]=tmp;
        i++;
        j--;
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}