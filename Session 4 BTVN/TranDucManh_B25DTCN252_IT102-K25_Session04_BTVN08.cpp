#include <stdio.h>

int main() {
    int a, b, c;

    printf("Nhap 3 canh cua tam giac (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    // Ki?m tra di?u ki?n tam giác:
    // T?ng hai c?nh ph?i l?n hon c?nh còn l?i
    if (a + b > c && a + c > b && b + c > a)
        printf("La 3 canh tam giac\n");
    else
        printf("Khong phai 3 canh tam giac\n");

    return 0;
}

