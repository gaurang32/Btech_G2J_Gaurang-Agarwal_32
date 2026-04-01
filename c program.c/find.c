#include<stdio.h>
int main(){
    int m[50][50],v[50][50]={0},i,j,r,c,x,y,count = 0;
    printf("Rows and Cols: ");
    scanf("%d %d", &r, &c);
    printf("Elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++){
            scanf("%d", &m[i][j]);
        }
    }
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++){
           if(v[i][j] = 0)
            count = 0;
            for(x = 0; x < r; x++) {
                for(y=0; y < c; y++){
                    if(m[i][j] == m[x][y]){
                    count+=1;
                    v[x][y] = 1;
                    }}}
    printf("%d occurs %d times\n", m[i][j], count);
        }}}
                    