#include<stdio.h>
int main()
{
    int x;
    scanf("%d %d",&x);
    int a[x][x];
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int flag=1;
    
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            if(i==j && a[i][j] != 0)
            {
                flag = 0;
                break;
            }
            else if(i != j && a[i][j] != 0)
            {
                flag = 0;
                break;
            }
        }
    }
    
    return 0;
}