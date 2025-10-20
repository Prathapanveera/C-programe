#include <stdio.h>

int main() {
    int result;

printf("Type your marks");

scanf("%d", &result);

if (result >=75){
    printf("Your result is A");
}
else if(result >=65){
    printf("Your result is B");

}
else if(result >=55){
    printf("Your result is C");

}
else if (result>=35){
    printf("Your result is C");
}
else{
    printf("Your result is W");
}



}
