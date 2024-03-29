#include<stdio.h>
int main (void){

    // pointer arithmetic
    int a[5]={1,2,3,4,5};
    int *p= &a[0];

    //dereferencing 
    printf("%d\n",*p);
    printf("%d\n",*(p+1));  //adding to pointers
    
     // iterate over arrays 
     for(int i=0; i<5;i++){
        printf("%d\n",*(p+i)); // or p[i]
     }
     
     // changing the pointers
     int arr[]={10,20,30,40,50,99};
     int *ap = &arr[0]; // ap points to 10

     //incrementing the pointer everytime the ap != 99 [ modifying the pointer crazy ]
     while(*ap != 99){
        printf("%d\n", *ap);
        ap++;
     }

    return (0);
}