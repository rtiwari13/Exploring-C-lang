//formatted input 

#include<stdio.h>
int main(void){
    FILE *fp;
    char names[1024];
    float length;
    int mass;

fp = fopen("whales.txt", "r");

while (fscanf(fp,"%s %f %d", names,&length,&mass) != EOF){
    printf("%s whale, %d tones, %.lf meters\n", names, mass,length);
}
fclose(fp);
}