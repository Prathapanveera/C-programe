#include <stdio.h>
int main()
{
    int arr[]= {100,200,300,400,500};
    int *ptr,i;

    ptr = arr;

    for(i = 0;i < 5; i++)
    printf("prt = %d\n",ptr+i);

    for(i = 0;i < 5; i++)
    printf("prt = %d\n",*(ptr+i));

    printf("Address of A : %d\n",&arr);

    printf("Address of B : %d\n",&ptr);

    return 0;


}
