#include <stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if(age <= 12)
        printf("Child");
    else if(age <= 17 && age>12 )
        printf("Teenager");
    else if(age <= 60&& age>17)
        printf("Adult");
    else
        printf("Senior Citizen");

    return 0;
}