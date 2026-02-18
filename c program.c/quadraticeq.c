#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double d, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0) {
        printf("This is not a quadratic equation.\n");
        return 0;
    }
    d= pow(b, 2) - 4*a*c;

    if (d> 0) {
        root1 = (-b + sqrt(d))/(2 * a);
        root2 = (-b - sqrt(d))/(2 * a);
        printf("Roots are real and different.\n");
        printf("Root1 = %f\n",root1);
        printf("Root2 = %f\n",root2);
    }
    else if (d== 0) {
        root1 = -b/(2 * a);
        printf("Roots are real and equal.\n");
        printf("Root = %f\n",root1);
    }
    else {
        realPart = -b/(2 * a);
        imagPart = sqrt(-d) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root1 = %f + %fi\n",realPart,imagPart);
        printf("Root2 = %f - %fi\n",realPart,imagPart);
    }
    return 0;
}
