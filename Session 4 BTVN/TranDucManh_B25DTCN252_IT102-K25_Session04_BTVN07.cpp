#include <stdio.h>

int main() {
    int nam;

    printf("Nhap nam: ");
    scanf("%d", &nam);

    // Ki?m tra nam nhu?n
    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
        printf("Nam %d la nam nhuan\n", nam);
    else
        printf("Nam %d khong phai la nam nhuan\n", nam);

    return 0;
}

