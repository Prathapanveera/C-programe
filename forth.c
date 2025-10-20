#include <stdio.h>

int main() {
    int result;

    printf("Type your Marks");

    scanf("%d", &result);

    if(result <35){
        printf("your great is F");

    }
    else if(result<=55){
        printf("your great is s");
    }
    else if(result<=65){
        printf("Your great is c");
    }
    else if (result<=75){
        printf("Your great is B");
    }
    else
        printf("Your great is A");

        return 0;




}
