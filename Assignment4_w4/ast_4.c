//example 1 has return + parameter

// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #include<math.h>
// #include<limits.h>

// int mul(int x, int y);

// int main()
// {
//     printf("%d",mul(8,19));
//     return 0;
// }

// int mul(int x, int y)
// {
//     int mul= x*y;
//     return mul;
// }

//Has Return + No Parameter

// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #include<math.h>
// #include<limits.h>


// int mod()
// {
//     int z, o;
//     scanf("%d %d",&z,&o);
//     int x= z % o;
//     return x;
// }


// int main()
// {
//     int y=mod();
//     printf("%d",y);
//     return 0;
// }


//no return+parameter

// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #include<math.h>
// #include<limits.h>

// void divide(int a, int b)
// {
    
//     int z=a/b;
//     printf("%d",z);
// }

// int main()
// {
//     int x,y;
//     scanf("%d %d",&x,&y);
//     divide(x,y);
//     return 0;
// }

//No Return + No Parameter

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

void sub(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    int b=x-y;
    printf("%d", b);
}

int main()
{
    sub();
    return 0;
}