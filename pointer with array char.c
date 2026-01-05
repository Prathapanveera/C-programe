#include <stdio.h>
int main()
{
    char a[]= "Cyber cecurity";
    char b[]= "Artificial Intelligence";
    char *p= a;
    char *m= b;
    int i;

    a[6]= 's';

     printf("%c \n",*a);


    for(i = 0;i < 14;i++)
        printf("%c\n",*(p + i));

    for(i = 0;i < 14;i++)
        printf("%d\n",(p + i));




    /*printf("%s \n",a);
    printf("%s \n",b);
    printf("%s \n",p);
    printf("%s \n",b);
    printf("%d \n",&p);
    printf("%d \n",&b);
    printf("%s \n",*p);
    printf("%s \n",*b);*/



    return 0;

}
