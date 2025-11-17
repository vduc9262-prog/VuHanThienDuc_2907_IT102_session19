#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main() {
    int arr[1000];
    int n = 0;
    int chon;

    do {
        printf("\n");
        printf("==============================\n");
        printf("1. Nhap mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Do dai mang\n");
        printf("4. Tong cac phan tu\n");
        printf("5. Phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("==============================\n");
        printf("Ban chon: ");
        scanf("%d", &chon);

        if(chon == 1) {
            printf("Nhap so phan tu: ");
            scanf("%d", &n);
            if(n < 1 || n > 1000) {
                printf("So phan tu khong hop le!\n");
                n = 0;
                continue;
            }
            for(int i = 0; i < n; i++) {
                printf("arr[%d] = ", i);
                scanf("%d", arr + i);
            }
            printf("Da nhap thanh cong %d phan tu!\n", n);
        }

        else if(chon == 2) {
            if(n == 0) {
                printf("Mang chua co du lieu!\n");
                continue;
            }
            printf("Cac phan tu: ");
            for(int i = 0; i < n; i++) {
                printf("%d ", *(arr + i)); 
            }
            printf("\n");
        }

        else if(chon == 3) {
            printf("Do dai mang: %d\n", n);
        }

        else if(chon == 4) {
            if(n == 0) {
                printf("Mang rong, tong = 0\n");
                continue;
            }
            int tong = 0;
            for(int i = 0; i < n; i++) {
                tong += *(arr + i); 
            }
            printf("Tong cac phan tu = %d\n", tong);
        }

        else if(chon == 5) {
            if(n == 0) {
                printf("Mang rong!\n");
                continue;
            }
            int max = *arr;
            for(int i = 1; i < n; i++) {
                if(*(arr + i) > max) {
                    max = *(arr + i); 
                }
            }
            printf("Phan tu lon nhat = %d\n", max);
        }

        else if(chon == 6) {
            printf("Cam on ban da su dung chuong trinh!\n");
        }

        else {
            printf("Vui long chon tu 1-6!\n");
        }

    } while(chon != 6);

    return 0;
}
