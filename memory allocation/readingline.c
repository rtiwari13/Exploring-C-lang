/*
==> Use of realloc() to grow a buffer as we read in more data.
==> Use of realloc() to shrink the buffer down to the
 perfect size after we’ve completed the read.
*/

#include <stdio.h>
#include <stdlib.h>

char *readline(FILE *fp){
    int offset =0; // Index next char goes in the buffer
    int buffsize =4; // power of 2 initial size
    char *buf; // buffer 
    int c ; // char we read in 

    buf = malloc (buffsize);

    if (buf == NULL)
    return NULL;
    
while( c = fgetc(fp), c!= '\n' && c!= EOF){
if (offset = buffsize - 1){
    buffsize *=2;

    char *new_buf = realloc(buf, buffsize);

    if(new_buf == NULL){
        free(buf);
        return NULL;
    }
    buf = new_buf;

}
 buf[offset++] = c;

}
 if (c == EOF && offset == 0) {
        free(buf);
        return NULL;
    }

    if(offset < buffsize -1){
        char *new_buf = realloc(buf, offset + 1);

        if(new_buf != NULL)
        {
            buf = new_buf;
        }
    }

    buf[offset] = '\0';

    return buf;


    }

int main(void)
{
    FILE *fp = fopen("random.txt", "r");

    char * line ;

    while((line = readline(fp)) != NULL){
        printf("%s\n", line);
        free(line);

    }

    fclose(fp);
}