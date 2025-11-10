#include <stdio.h>

float Bill(float foodCost, int people);

int main() {
    float foodCost, total;
    int people;

    printf("Enter food cost: ");
    scanf("%f", &foodCost);

    printf("Enter number of people: ");
    scanf("%d", &people);

    total = Bill(foodCost, people);

    printf("Total bill including all charges: $%.2f\n", total);

    return 0;
}

float Bill(float foodCost, int people) {
    float tax = 0.08 * foodCost;
    float tip;
    float serviceCharge = 0.0;

    if (foodCost > 50){
        tip = 0.15 * foodCost;
    }    
    else{
        tip = 0.10 * foodCost;
    }    
    if (people > 6){
        serviceCharge = 0.05 * foodCost;
    }    

    return foodCost + tax + tip + serviceCharge;
}

