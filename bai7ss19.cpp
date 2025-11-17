#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main() {
    int *p = NULL;         
    int n = 0;      
    int choice;
    
    do {
        // In menu
        printf("\n\n================ MENU ================\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("======================================\n");
        printf("Ban chon: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: {
                printf("Nhap so phan tu n: ");
                scanf("%d", &n);
                if(n <= 0) {
                    printf("So phan tu phai > 0!\n");
                    n = 0;
                    break;
                }

                printf("Nhap %d phan tu:\n", n);
                for(int i = 0; i < n; i++) {
                    printf("  a[%d] = ", i);
                    scanf("%d", p + i);
                }
                printf("=> Nhap mang thanh cong!\n");
                break;
            }
                
            case 2: {
                if(n == 0 || p == NULL) {
                    printf("Mang rong! Hay nhap mang truoc.\n");
                } else {
                    printf("Cac phan tu trong mang:\n");
                    for(int i = 0; i < n; i++) {
                        printf("%d ", *(p + i));  
                    }
                    printf("\n");
                }
                break;
            }
                
            case 3: {
                printf("Do dai mang (so phan tu): %d\n", n);
                break;
            }
                
            case 4: {
                if(n == 0 || p == NULL) {
                    printf("Mang rong!\n");
                } else {
                    int tong = 0;
                    for(int i = 0; i < n; i++) {
                        tong += *(p + i);
                    }
                    printf("Tong cac phan tu = %d\n", tong);
                }
                break;
            }
                
            case 5: {
                if(n == 0 || p == NULL) {
                    printf("Mang rong!\n");
                } else {
                    int max = *p;        
                    for(int i = 1; i < n; i++) {
                        if(*(p + i) > max) {
                            max = *(p + i);
                        }
                    }
                    printf("Phan tu lon nhat = %d\n", max);
                }
                break;
            }
                
            case 6: {
                printf("Cam on ban da su dung chuong trinh!\n");
                if(p != NULL) free(p);
                return 0;
            }
                
            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
        
    } while(choice != 6);
    
    return 0;
}
