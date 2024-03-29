#include<stdio.h>
int main()
{
struct animal {
    char *name;
    int age;
    char *color;
};

struct animal dog = {"Oscar", 4 , "white" };  //Variable "dog" of type "struct animal"

printf("%s\n", dog.name);
printf("%d\n", dog.age );
printf("%s\n", dog.color);
 
 return(0);
}