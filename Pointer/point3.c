#include<stdio.h>
int main(void)
{
    int a[] = {1,2,3,4,5};
    int *p =a;
     
     printf("Array notation with a \n");
     for(int i=0;i<5;i++)
     printf("%d\n",a[i]);
       
     printf("Array notation with p \n");
     for(int i=0;i<5;i++)
     printf("%d\n",p[i]);

      printf("Pointer notation with a \n");
     for(int i=0;i<5;i++)
     printf("%d\n",*(a+i));

     printf("Pointer notation with p \n");
     for(int i=0;i<5;i++)
     printf("%d\n",*(p+i));
    

     printf("Moving pointer p \n");
     for(int i=0;i<5;i++)
     printf("%d\n",*(p++));

return(0);

}
//Array / Pointer Equivalence 