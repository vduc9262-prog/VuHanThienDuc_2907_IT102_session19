#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int compareArrays(int *a, int *b, int n) {
    for(int i = 0; i < n; i++) {
        if(*(a + i) != *(b + i)) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    
    if(n <= 0) {
        printf("So phan tu phai > 0\n");
        return 1;
    }
    
    int arr1[1000], arr2[1000];
    
    printf("Nhap mang 1:\n");
    for(int i = 0; i < n; i++) {
        printf("arr1[%d] = ", i);
        scanf("%d", &arr1[i]);
    }
    
    printf("Nhap mang 2:\n");
    for(int i = 0; i < n; i++) {
        printf("arr2[%d] = ", i);
        scanf("%d", &arr2[i]);
    }
    
    if(compareArrays(arr1, arr2, n))
        printf("Hai mang GIONG NHAU\n");
    else
        printf("Hai mang KHAC NHAU\n");
    
    return 0;
}
