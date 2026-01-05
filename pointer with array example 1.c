#include <stdio.h>

 int main()
 {

     int a[5]= {10,20,30,40,50};
     int *b;

     b= a + 2;

     printf("%d\n",b[2]);

     return 0;
 }
