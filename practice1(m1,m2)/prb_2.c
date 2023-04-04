#include<stdio.h>
int main(){

    int a, b;
    scanf("%d %d", &a, &b);
    int p = a + b;
    int s = a - b;
    int m = a * b;
    float d = a * 1.0 / b;

    printf("%d + %d = %d \n", a, b, p);
    printf("%d - %d = %d \n", a, b, s);
    printf("%d * %d = %d \n", a, b, m);
    printf("%d / %d = %0.2f \n", a, b, d);
    return 0;

}