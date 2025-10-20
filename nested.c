#include <stdio.h>

int main(){
    int A;
    int B;
    int C;

    printf("type number A:");
    scanf("%d", &A);

     printf("type number B:");
    scanf("%d", &B);

     printf("type number C:");
    scanf("%d", &C);


    if (A > B){
        if (A > C){
            printf("A is Big");

        }
        else {
            printf("C is Big");

        }

    }
    else {
        if (B > C){
            printf("B is Big");
        }
        else{
            printf("C is Big");
        }
    }
    return 0;














}
