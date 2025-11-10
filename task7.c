#include <stdio.h>

float calculateRentalCost(int days, float km);

int main() {
    int days;
    float km, totalCost;

    printf("Enter number of rental days: ");
    scanf("%d", &days);

    printf("Enter total kilometers driven: ");
    scanf("%f", &km);

    totalCost = calculateRentalCost(days, km);

    printf("Total rental cost: $%.2f\n", totalCost);

    return 0;
}
float calculateRentalCost(int days, float km) {
    float totalCost = 40 * days;
    if (km>100){
        totalCost+=0.25*(km-100*days);
    }
    if (days >= 7){
        totalCost *= 0.9;
    }    

    return totalCost;
}
