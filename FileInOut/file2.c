#include<stdio.h>
int main (void)
{
    FILE *fp;
    int c ;

   fp= fopen("abc.txt", "r");
    while ((c = fgetc(fp)) != EOF){
        printf("%c",c);
    }
    fclose(fp);
    
}

// Random Text.
// EOF == End of File 
