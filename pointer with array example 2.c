#include <stdio.h>
 int main()
 {
     int s[5]= {30,40,70,10,39};
     int *ptr;
     ptr = &s[1];

     printf("*ptr %d\n",*ptr);
     printf("*(ptr+1) = %d\n",*(ptr+1));
     printf("*(ptr-1) = %d\n",*(ptr-1));

     return 0;

 }
