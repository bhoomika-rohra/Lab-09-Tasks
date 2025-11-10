#include <stdio.h>
void temperature(float current);

int main() {
    float current;
    printf("Enter current temperature: ");
    scanf("%f", &current);
    temperature(current);

    return 0;
}

void temperature(float current) {
    if (current > 35) {
        printf("Code 1: HEAT ALERT\n");
    } 
    else if (current < 10) {
        printf("Code 2: COLD ALERT\n");
    } 
    else if (current >= 15 && current <= 25) {
        printf("Code 3: COMFORT ZONE\n");
    } 
    else {
        printf("Code 4: NORMAL CONDITIONS\n");
    }
}
