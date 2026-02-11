#include <stdio.h>

int main() {
    float a,b;
    char op;

    printf("Enter first number: ");
    scanf("%f",&a);
    printf("Enter second number: ");
    scanf("%f",&b);
    printf("Enter operator (+,-,*,/): ");
    scanf(" %c",&op);

    switch(op)
    {
        case '+': printf("%f+%f=%f\n",a,b,a+b); 
        break;
        case '-': printf("%f-%f = %f\n",a,b,a-b); 
        break;
        case '*': printf("%f*%f = %f\n",a,b,a*b); 
        break;
        case '/': 
            if(b!=0) printf("%f / %f = %f\n",a,b,a/b); 
            else printf("Error: Division by zero!\n");
            break;
    }
    return 0;
}
