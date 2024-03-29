#include<stdio.h>
int main()
{

char *s = " String Literal "; // s is a pointer to the first character in string == S
printf("%s\n",s);

// strings as an array 
char str[] = " String as an Array";

//accessing string as array 
for (int i=0;i<19;i++ ){
    printf("%c\n",str[i]);
}


//alt method using pointer 
char *st = "String as an Array2.0";

for (int j=0; j<21; j++){
    printf("%c",st[j]);
}

return (0);
}