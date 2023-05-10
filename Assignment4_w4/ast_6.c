// //pass by valuie

// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #include<math.h>
// #include<limits.h>

// void new_func(int z)
// {
//     printf("The address of variable in new function is: %p\n", &z);
//     //if we want to change the value we can change for this variable
//     //changing value for new address not affect main func variable
//     z=777;
//     printf("value of new func z is: %d\n",z);
// }

// int main()
// {
//     int z=77;
//     printf("The address of variable in main function is: %p\n", &z);
//     //variable of main function
//     new_func(z);
//     printf("value of main func z is: %d",z);
//     return 0;
// }

//pass by reference

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>


void new_func(int *z)
{
    //main function variables value called by address or pointer
    printf("value of z in new function passed by address is: %d\n", *z);
    
    //different address for new function
    printf("address of z change value: %p\n", &z);
    
    // changing the value using main addresss
    *z=50;
}

int main()
{
    int z=999;

    //getting the size of variable which is 4 byte 
    int size=sizeof(z);
    printf("size of z is: %d\n",size);
    
    //getting address of main function variable
    printf("address of main func: %p\n", z);
    
    //printing new functions value and address
    new_func(&z);

    //printing updated value which was changed from new function
    printf("new updated value of z is: %d\n", z);

    return 0;
}



















