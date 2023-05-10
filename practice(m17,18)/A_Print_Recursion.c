#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

void fun(int x)
{
    if(x==0) return;
    printf("I love Recursion\n");
    fun(x-1);
}

int main()
{

    int x;
    scanf("%d",&x);
    fun(x);
    return 0;
}