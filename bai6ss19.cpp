#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void copyArray(int *src, int *dest, int n) {
    for(int i = 0; i < n; i++) {
    *(dest + i) = *(src + i);
    }
}

int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    
    if(n <= 0) {
        printf("So phan tu phai > 0\n");
        return 1;
    }
    
    int a[1000], b[1000];
    
    printf("Nhap mang a:\n");
    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    copyArray(a, b, n);
    
    printf("Mang b sau khi sao chep:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
    
    return 0;
}

