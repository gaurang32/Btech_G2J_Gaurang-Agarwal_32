#include <stdio.h>

int main() {
    int m[10][10], r, c, i, j, s;

    printf("Rows and Cols: ");
    scanf("%d %d", &r, &c);

    printf("Elements:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &m[i][j]);

    for(i = 0; i < r; i++) {
        s = 0;
        for(j = 0; j < c; j++) 
        s += m[i][j];
        printf("Row %d sum: %d\n", i + 1, s);
    }

    for(j = 0; j < c; j++) {
        s = 0;
        for(i = 0; i < r; i++) 
        s += m[i][j];
        printf("Col %d sum: %d\n", j + 1, s);
    }

    return 0;
}
