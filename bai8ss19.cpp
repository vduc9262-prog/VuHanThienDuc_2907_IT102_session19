#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int *a;
int n = 0;

int main() {
    int chon;
    
    do {
        printf("\n=== MENU ===\n");
        printf("1. Nhap mang\n");
        printf("2. In so chan\n");
        printf("3. In so nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Sap xep mang\n");
        printf("8. Tim kiem\n");
        printf("9. Thoat\n");
        printf("Chon: ");
        scanf("%d", &chon);

        if(chon == 1) {
            if(a) free(a);
            printf("Nhap n: "); scanf("%d",&n);
            a = (int*)malloc(n*sizeof(int));
            for(int i=0; i<n; i++) {
                printf("a[%d]= ",i);
                scanf("%d", a+i);
            }
        }
        else if(chon == 2 && n>0) {
            printf("So chan: ");
            for(int i=0; i<n; i++)
                if(*(a+i)%2==0) printf("%d ",*(a+i));
            printf("\n");
        }
        else if(chon == 3 && n>0) {
            printf("So nguyen to: ");
            for(int i=0; i<n; i++) {
                int x = *(a+i), nt=1;
                if(x<2) nt=0;
                for(int j=2; j*j<=x; j++)
                    if(x%j==0) nt=0;
                if(nt) printf("%d ",x);
            }
            printf("\n");
        }
        else if(chon == 4 && n>0) {
            for(int i=0; i<n/2; i++) {
                int t = *(a+i);
                *(a+i) = *(a+n-1-i);
                *(a+n-1-i) = t;
            }
            printf("Da dao nguoc!\n");
        }
        else if(chon == 5 && n>0) {
            int sx;
            printf("6.Tang dan  7.Giam dan: ");
            scanf("%d",&sx);
            for(int i=0; i<n-1; i++)
                for(int j=i+1; j<n; j++)
                    if( (sx==6 && *(a+i)>*(a+j)) || (sx==7 && *(a+i)<*(a+j)) ) {
                        int t=*(a+i); *(a+i)=*(a+j); *(a+j)=t;
                    }
            printf("Da sap xep!\n");
        }
        else if(chon == 8 && n>0) {
            int x; printf("Nhap so can tim: "); scanf("%d",&x);
            int ok=0;
            for(int i=0; i<n; i++)
                if(*(a+i)==x) { printf("Tim thay tai vi tri %d\n",i); ok=1; }
            if(!ok) printf("Khong tim thay\n");
        }
    } while(chon != 9);

    if(a) free(a);
    return 0;
}
