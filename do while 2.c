#include <stdio.h>

int main() {
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Start\n");
        printf("2. Help\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: printf("Starting...\n"); break;
            case 2: printf("Help section...\n"); break;
            case 3: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 3);

    return 0;
}
