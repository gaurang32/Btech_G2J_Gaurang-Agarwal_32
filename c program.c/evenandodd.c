#include<stdio.h>
int main()
{
    int n, i;
    printf("enter the total length of the array:");
    scanf("%d",&n);
    int even=0, odd=0;
    int arr[100];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    printf("Even count: %d\nOdd count: %d", even, odd);
    return 0;
}

