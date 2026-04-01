#include <stdio.h>

int main() {
    int m[50][50], r, c, i, j, flag = 1;

    printf("Rows and Cols: ");
    scanf("%d %d", &r, &c);

    if (r != c) {
        printf("Not an Identity Matrix (Must be square)");
        return 0;
    }

    printf("Elements:\n");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            scanf("%d", &m[i][j]);
        }}
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if (i == j && m[i][j] != 1) flag = 0;
            if (i != j && m[i][j] != 0) flag = 0;
        }
    }

    if (flag == 1) printf("Identity Matrix");
    else printf("Not an Identity Matrix");

    return 0;
}
