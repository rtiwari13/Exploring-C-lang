#include<stdio.h>
int main (void){
    FILE *fp;
    int x=32;

   // fp=fopen("out.txt", "w");  // w write
   fp=stdout; // it will show output in console instead of making a new txt file

    fputc('B',fp);
    fputs("\n",fp);
    fprintf(fp,"x=%d\n",x);
    fputs("alo world!\n",fp);

    fclose(fp);


}
// this produces a file == out.txt
