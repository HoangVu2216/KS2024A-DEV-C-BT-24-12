#include <stdio.h>

int main() {
    int n,a;
    printf("nhap so phan tu cua mang: \n");
    scanf("%d", &n);
    int number[n];
    printf("nhap gia tri cac phan tu cua mang: \n");

    for (int i = 0; i < n; i++) {
        printf ("number[%d]: ", i);
        scanf("%d", &number[i]);
    }

    while (true) {
        printf("\nnhap lua chon cua ban : \n");
        printf("=================================MENU=================================\n");
        printf("=  1. in cac gia tri phan tu cua mang                                =\n");
        printf("=  2. su dung ham insertion sort de sap xep mang giam dan va in ra   =\n");
        printf("=  3. su dung ham selection sort de sap xep mang tang dan va in ra   =\n");
        printf("=  4. su dung ham bubble sort de sap xep mang giam dan va in ra      =\n");
        printf("=  5. thoat                                                          =\n");
        printf("======================================================================\n");
        scanf("%d", &a);

        switch (a) {

            case 1:
                printf ("mang ban dau la \n ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", number[i]);
                }
            printf("\n\n");
            break;

            case 2:
                for (int i = 1; i < n; i++) {
                    int key = number[i];
                    int j=i-1;
                    while (j>=0 && key>number[j]) {
                        number[j+1] = number[j];
                        j = j-1;
                    }
                    number[j+1] = key;
                }
                printf ("mang duoc sap xep giam dan bang insertion sort nhu sau: \n");
                for (int i = 0; i < n; i++) {
                    printf("%d ", number[i]);
                }
                    printf("\n\n");
                break;

            case 3:
                for (int i = 0; i < n; i++) {
                    for (int j = i+1; j < n; j++) {
                        if (number[i] > number[j]) {
                            int temp = number[i];
                            number[i] = number[j];
                            number[j] = temp;
                        }
                    }
                }
            printf ("mang duoc sap xep tang dan bang selecction sort nhu sau: \n");
                for (int i = 0; i < n; i++) {
                    printf("%d ", number[i]);
                }
                    printf("\n\n");
                break;

            case 4:
                for (int i = 0; i < n - 1; i++) {
                    for (int j = 0; j < n - i - 1; j++) {
                        if (number[j] < number[j + 1]) {
                            int temp = number[j];
                            number[j] = number[j + 1];
                            number[j + 1] = temp;
                        }
                    }
                }
            printf ("mang duoc sap xep giam dan bang bubble sort nhu sau: \n");
                for (int i = 0; i < n; i++) {
                    printf("%d ", number[i]);
                }
                    printf("\n\n");
                break;

            case 5:
                printf ("thoat chuong trinh!! \n");
                return 0;

            default:
                printf("\nlua chon cua ban khong dung, vui long chon lai!!!\n");
                break;
        }
    }
}
