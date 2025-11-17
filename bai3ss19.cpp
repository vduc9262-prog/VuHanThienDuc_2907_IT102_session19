#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
float average(int *arr, int n) {
    float sum = 0;
    for(int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    return sum / n;
}

int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    
    if(n <= 0) {
        printf("So phan tu phai > 0\n");
        return 1;
    }
    
    int arr[1000];
    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    float tb = average(arr, n);
    
    printf("Gia tri trung binh cua mang: %.2f\n", tb);
    
    return 0;
}
