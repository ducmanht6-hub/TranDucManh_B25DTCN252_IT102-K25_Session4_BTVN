#include <stdio.h>

int main() {
    int a, b, c;
    printf("Nhap 3 canh cua tam giac (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a)
        printf("La 3 canh tam giac\n");
    else
        printf("Khong phai 3 canh tam giac\n");

    return 0;
}

