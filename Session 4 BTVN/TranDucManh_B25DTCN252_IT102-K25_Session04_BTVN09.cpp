#include <stdio.h>

int main() {
    int ngay, thang, nam;
    int hopLe = 1;
    printf("Nhap ngay: ");
    scanf("%d", &ngay);
    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);
    if (thang < 1 || thang > 12)
        hopLe = 0;
    else {
        int soNgayTrongThang;
        if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
            soNgayTrongThang = 31;
        else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
            soNgayTrongThang = 30;
        else {
            // Tháng 2 ? ki?m tra nam nhu?n
            if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
                soNgayTrongThang = 29; // nam nhu?n
            else
                soNgayTrongThang = 28; // nam không nhu?n
        }
        if (ngay < 1 || ngay > soNgayTrongThang)
            hopLe = 0;
	 }
    if (hopLe)
        printf("Ngay thang nam hop le\n");
    else
        printf("Ngay thang nam khong hop le\n");
    return 0;
}

