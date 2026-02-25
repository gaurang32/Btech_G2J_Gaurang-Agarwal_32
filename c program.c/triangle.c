#include <stdio.h>

int main() {
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);

    if(a+b>c && a+c>b && b+c>a){
        if(a==b && b==c)
            printf("Equilateral");
        else if(a==b || b==c || a==c)
            printf("Isosceles");
        else
            printf("Scalene");
    }
    else
        printf("Not a triangle");

    return 0;
}
