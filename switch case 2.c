#include <stdio.h>
int main(){
    int num1, num2;
    int result;

    printf("Type your 1st Number: ");
    scanf("%d", &num1);

    printf("Type your 2nd Number: ");
    scanf("%d", &num2);

    switch(num1 > num2){
        case 1: result = num1;
        break;

        case 0: result = num2;
        break;
   }

        printf("The Maximum Number is : %d \n", result);

        return 0;






}
