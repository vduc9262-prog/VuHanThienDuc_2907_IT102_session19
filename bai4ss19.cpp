#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int countValue(int *arr, int n, int x) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            count++;
        }
    }
    return count;
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
    
    int x;
    printf("Nhap gia tri can tim x: ");
    scanf("%d", &x);
    
    int result = countValue(arr, n, x);
    
    printf("So lan xuat hien cua %d trong mang: %d\n", x, result);
    
    return 0;
}
