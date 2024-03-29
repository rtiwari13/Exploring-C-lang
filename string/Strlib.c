#include<stdio.h>
#include<string.h>
int main (){

    char *s = "kts kts kts ";
    printf("Length of string s is %zu bytes long.\n ", strlen(s)); // 11 bytes 

    // copy a string a modify it using strcpy()

    char str[]="Hello World !";
    char ctr[50];

    // copy str in ctr
    strcpy( ctr , str);

    //modify 
    ctr[0]= 'A';
    ctr[1]= 'a';

    printf("%s\n", str); // Hello World 

    printf("%s\n", ctr); //  Aallo World 

    return (0);


}