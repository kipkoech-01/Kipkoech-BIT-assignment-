#include <stdio.h>

int main() {
    float balance = 5000, amount;

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);

        if (amount <= 0) {
            printf("Invalid withdrawal amount!\n");
        }
        else if (amount > balance) {
            printf("Insufficient balance!\n");
        }
        else {
            balance = balance - amount;
            printf("Remaining balance: %.2f KSh\n", balance);
        }
    }

    printf("Account balance is zero. Withdrawals stopped.\n");

    return 0;
}