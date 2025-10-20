#include <stdio.h>

int main(){
    char a = 'd';
    char b = 'c';

    switch(printf("%c%c\n",a,b)){
    case 1:

    printf("frist \n");
        break;

    case 2:
        printf("second \n");
        break;
    case 3:
        printf("third \n");
        break;
    default:
        printf("default \n");

        return 0;




    }


}
