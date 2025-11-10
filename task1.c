#include <stdio.h>

float Transaction(float remainingLimit, float transactionAmount); 

int main() {
    float remainingLimit, transactionAmount;

    printf("Enter remaining limit: ");
    scanf("%f", &remainingLimit);
    printf("Enter transaction amount: ");
    scanf("%f", &transactionAmount);

    remainingLimit = Transaction(remainingLimit, transactionAmount);

    printf("Remaining limit: $%.2f\n", remainingLimit);
    return 0;
}

float Transaction(float remainingLimit, float transactionAmount) {
    if (transactionAmount <= remainingLimit) {
        remainingLimit -= transactionAmount;
        printf("Transaction APPROVED.\n");
    } else {
        printf("Transaction DECLINED.\n");
    }
    return remainingLimit;
}
