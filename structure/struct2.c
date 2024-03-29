#include<stdio.h>
struct animal{
    char *name;
    int age;
    float weight;
    char *color;
    
};

void set_weight(struct animal *p , float new_weight){
    p->weight = new_weight;    // use arrow while using pointer to struct 
}

int main (void){

 struct animal dog = {.name="Julie", .age=2, .color ="gray"};
 set_weight(&dog , 7.8);

 printf("%f\n" , dog.weight);

return(0);
}
