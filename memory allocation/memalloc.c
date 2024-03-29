#include<stdio.h>
#include<stdlib.h>
int main(void){
    
    // allocating space for a single int 
    int *p = malloc(sizeof(int));
    *p = 12;
    printf("%d\n", *p);
    free(p);
   return (0); 
}

// output 12