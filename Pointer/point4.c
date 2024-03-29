#include<stdio.h>
#include <string.h>
int  main(void)
{
 char s[]="Goats";
 char t[100];
// void *memcpy(void *s1 , void *s2 ,size_t n);
memcpy(t, s, 7);
printf("%s\n",t);

return (0);
}
// void pointers