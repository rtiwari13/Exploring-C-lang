#include<stdio.h>

void *func_memcpy(void *dest, void *src , int byte_count){

// convert void to char
char *s = src;
char *d = dest;
while(byte_count--)
{
    *d++ = *s++;
}

return dest;
}
int main(void){
    //memcpy implementation
 char s[]="Ghost";
 char t[100];
 func_memcpy(t,s,7);
 printf("%s\n",t);

 return(0);
}