#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a single word: ");
    // %s reads input until the first space or newline
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        // Check for vowels
        if (str[i] == 'a' || str[i] == 'A' || 
            str[i] == 'e' || str[i] == 'E' || 
            str[i] == 'i' || str[i] == 'I' || 
            str[i] == 'o' || str[i] == 'O' || 
            str[i] == 'u' || str[i] == 'U') {
            count++;
        }
    }

    printf("Vowels in word: %d\n", count);

    return 0;
}
