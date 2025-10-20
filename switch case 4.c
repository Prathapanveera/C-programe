#include <stdio.h>

int main(){

    int num;

    printf("Type your Number:  ");
    scanf("%d", &num);

    switch(num > 0){
    case 1:
        printf("%d Positive Number", num);
        break;

    case 0:
        switch(num < 0){
    case 1:
        printf("%d Negative Number",num);
        break;
    case 0:
        printf("%d Zero", num);
        break;
    }
    break;
    }
    return 0;
    }



