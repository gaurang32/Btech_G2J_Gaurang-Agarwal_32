#include <stdio.h>

int main() {
    char str[100], temp;
    int i, j, length = 0;

    printf("Enter string: ");
    scanf("%s", str);

    while (str[length] != '\0') {
        length++;
    }

    i = 0;
    j = length - 1;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("Reversed: %s\n", str);

    return 0;
}