#include<stdio.h>
int main() 
{
    float m1, m2, m3, m4, m5;
    float sum, percentage;
    printf("Enter marks of 5 subjects:\n");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    sum = m1 + m2 + m3 + m4 + m5;
    percentage = sum / 5;
    printf("Sum = %f\n",sum);
    printf("Percentage =%f\n", percentage);
    return 0;
}
