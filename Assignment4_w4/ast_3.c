// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #include<math.h>
// #include<limits.h>


// int count_before_zero() 
// {
//     int n;
//     scanf("%d",&n);
//     int ar[n];

//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&ar[i]);
//     }

//     int count=0; 
//     int flag=0;

//     for(int i=0;i<n;i++)
//     {
//         if(ar[i]==0)
//         {
//             flag=1;
//         }
//         if(flag==0)
//         {
//         count=count+1;
//         }   
//     }  
    
//     return count;

// }

// int main()
// {
//     printf("%d\n", count_before_zero());

//     return 0;
// }

// // int main()
// // {
// //     int n;
// //     scanf("%d",&n);

// //     int count=0; 
// //     int flag=0;

// //     int ar[n];

// //     for(int i=0;i<n;i++)
// //     {
// //         scanf("%d",&ar[i]);
// //     }


// //     for(int i=0;i<n;i++)
// //     {
// //         if(ar[i]==0)
// //         {
// //             flag=1;
// //         }
// //         if(flag==0)
// //         {
// //         count=count+1;
// //         }   
// //     }  
    
// //     printf("%d", count);

// //     // count_before_zero(ar, n);

// //     return 0;
// // }

//answer of Merja bro
#include<stdio.h>

int count_before_zero( int arr[],int n);

int main(){
     int x;
     scanf("%d", &x);

     // array declear
     int num[x];
     // input array
     for( int i=0; i<x; i++){
          scanf("%d", &num[i]);
     }

     // pass value
     int count = count_before_zero(num, x);
     printf("%d\n", count);

     return 0;
}

int count_before_zero( int arr[], int n){

     int i, count = 0;
          for( int j=0; arr[j] > 0; j++ ){
               count++;
          }
          return count;
     
}