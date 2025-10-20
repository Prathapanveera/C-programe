#include <stdio.h>

int main () {
    int mynum;

    printf("Type any number: ");
    scanf("%d", & mynum);

    switch(mynum % 2){
        case 1:
        printf("Odd number");
        break;

    default:
        printf("Even number");

    }
        return 0;



}
