#include <stdio.h>
float Average(float sub1,float sub2, float sub3);
int main(){
    float sub1, sub2, sub3, average;
    printf("Enter marks for 3 subjects (0-100): ");
    scanf("%f %f %f", &sub1, &sub2, &sub3);
    average=Average(sub1,sub2,sub3);
    
    printf("Average Marks: %.2f\n", average);
    return 0;
}
float Average(float sub1,float sub2, float sub3){
    float average=(sub1+sub2+sub3)/3.0;
    if (average < 50){
        printf("Reason: Average below 50.\n");
    }
    else if (sub1 < 40 || sub2 < 40 || sub3 < 40){
        printf("Reason: One or more subjects below 40.\n");
    }
    else if ((average>=50)&&(sub1>=40)&&(sub2>=40)&&(sub3>=40)){
        printf("PASS\n");
    }
    else{
        printf("FAIL\n");
    }
    
    return average;
}
