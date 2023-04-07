#include<stdio.h>
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a;
    long long int b;
    float c;
    char d;

    scanf("%d\n", &a);
    scanf("%lld\n", &b);
    scanf("%f\n", &c);
    scanf("%c", &d);

    printf("%d\n", a);
    printf("%lld\n", b);
    printf("%0.2f\n", c);
    printf("%c", d);

    return 0;
}