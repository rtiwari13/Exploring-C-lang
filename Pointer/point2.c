#include<stdio.h>

int func_strlen(char *s){
 char *p=s;

 while(*p!=0){
    p++;
 }
return p-s;
}


int main(void){
    // functionality of strlen function in string 
    //subtracting two pointers

printf("%d\n",func_strlen("Hello World!")); //12
return (0);
}