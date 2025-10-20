#include <stdio.h>
#include <string.h>

int main() {
    char password[20];

    printf("Enter password: ");
    scanf("%s", password);

    while (strcmp(password, "1234") != 0) {
        printf("Wrong! Try again: ");
        scanf("%s", password);
    }

    printf("Access granted!\n");
    return 0;
}
