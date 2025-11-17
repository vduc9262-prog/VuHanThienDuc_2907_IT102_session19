#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void countEvenOdd(int *arr, int n, int *even, int *odd) {
    *even = 0;
    *odd = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            (*even)++;
        } else {
            (*odd)++;
        }
    }
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    if(n <= 0) {
        printf("So phan tu phai lon hon 0!\n");
        return 1;
    }
    
    int arr[1000];
    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    int evenCount, oddCount;
    countEvenOdd(arr, n, &evenCount, &oddCount);
    
    printf("\nSo phan tu chan: %d\n", evenCount);
    printf("So phan tu le: %d\n", oddCount);
    
    return 0;
}
