#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    
    int a, b, c;
    
    int max = 0;
    int min = 0;

    scanf("%d %d %d", &a, &b, &c);

    if ( a >= b && a >= c){
        max += a;
    }
    else if ( b >= a && b >= c){
        max += b;
    }
    else{
        max += c;
    }
    if ( a <= b && a <= c){
        min += a;
    }
    else if (b <= a && b <= c){
        min += b;
    }
    else{
        min += c;
    }
    printf("%d %d", min, max);

    return 0;
}