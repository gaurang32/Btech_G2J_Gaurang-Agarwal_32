#include <stdio.h>

int main() {
    int m[50][50], r, c, i, j, max, min;
    printf("Rows and Cols: ");
    scanf("%d %d", &r, &c);
    printf("Elements:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &m[i][j]);
    max = min = m[0][0];
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(m[i][j] > max) max = m[i][j];
            if(m[i][j] < min) min = m[i][j];
        }
    }
    printf("Max: %d\nMin: %d", max, min);
    return 0;
}
