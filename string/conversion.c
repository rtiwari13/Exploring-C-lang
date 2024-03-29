#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    char s[10];
    float f = 3.14159;

    char *c = "1.2267";
    float fl;
      // casting 
    int x = 10;
long int y = (long int)x + 12;

     // int to string 

    // converting f to string 
    snprintf(s,10,"%f", f);
    printf("String value: %s\n", s);

    // string to a float
    fl= atof(c);

    printf("%f\n",f);

}