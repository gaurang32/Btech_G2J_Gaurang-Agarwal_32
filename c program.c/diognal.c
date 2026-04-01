#include<stdio.h>
int main(){
    int m[50][50],i,j,r,c,p=0,s = 0,total;
    printf("Rows and Cols: ");
    scanf("%d %d", &r, &c);
    printf("Elements:\n");
    for(i = 0; i < r; i++) {     
    for(j = 0; j < c; j++){
    scanf("%d", &m[i][j]);}}
    printf("Diagonal:\n");{
    for(i=0;i<r;i++)
    s=s+m[i][i];
    p=p+m[i][r-1-i];
    }
    total=p+s;
    if(r%2!=0)
    total=total-m[r-1/2][r-1/2];
    printf("Sum of diagonal: %d", s);
    printf("Sum of anti-diagonal: %d", p);
    printf("Total: %d", total);

}