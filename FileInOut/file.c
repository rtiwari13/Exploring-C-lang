#include<stdio.h>
int main(void){
 
 FILE *fp;
 fp = fopen("abc.txt", "r"); // will (open file abc.txt )return FILE*
                            // r open a text from reading 

 int c = fgetc(fp);        // get a char from the stream 

 printf("%c\n",c);
    
 fclose(fp);

return (0);
}

// R (Output)