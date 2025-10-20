#include <stdio.h>

int main () {
    int number;

    do {
        printf( "Please enter positive number: ");
        scanf("%d", & number);

    }
    while (number > 0);

    return 0;

}
