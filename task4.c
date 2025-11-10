#include <stdio.h>

float calculateTotal(float orderAmount, float weight);

int main() {
    float orderAmount, weight, totalCost;

    printf("Enter order amount: ");
    scanf("%f", &orderAmount);

    printf("Enter package weight: ");
    scanf("%f", &weight);

    totalCost = calculateTotal(orderAmount, weight);

    printf("Total cost including shipping: $%.2f\n", totalCost);

    return 0;
}

float calculateTotal(float orderAmount, float weight) {
    float shipping;

    if (orderAmount > 100) {
        shipping = 0.0;  
    } 
    else if (weight < 2) {
        shipping = 10.0;  
    } 
    else if (weight >= 2 && weight <= 5) {
        shipping = 15.0; 
    } 
    else {  // weight > 5
        shipping = 20.0; 
    }

    return orderAmount + shipping;
}
