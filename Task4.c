#include <stdio.h>
int validatePin(int stored_pin, int entered_pin) {
    if (stored_pin == entered_pin) {
        return 1;
    }
    return 0;
}
int main() {
    int stored_pin = 4729, entered_pin = 0;
    for (int i = 0; i < 4; i++) {
        if (i == 3) {
            printf("CARD BLOCKED, CONTACT BANK!");
            break;
        }
        printf("\nEnter your PIN: ");
        scanf("%d", &entered_pin);
        if (validatePin(stored_pin, entered_pin) == 1) {
            printf("WELCOME!");
            break;
        }
        else {
            printf("WRONG PIN!\n");
            printf("You now have %d tries left\n", 2-i);
        }

    }
}
