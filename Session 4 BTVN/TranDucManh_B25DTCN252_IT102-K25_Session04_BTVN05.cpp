#include <stdio.h>

int main() {
    int chiSoCu, chiSoMoi;
    int soDien;
    long tien; // d�ng ki?u long d? tr�nh tr�n s?

    printf("Nhap chi so dien cu: ");
    scanf("%d", &chiSoCu);
    printf("Nhap chi so dien moi: ");
    scanf("%d", &chiSoMoi);

    // T�nh s? di?n ti�u th?
    soDien = chiSoMoi - chiSoCu;

    if (soDien < 0) {
        printf("Chi so moi phai lon hon chi so cu!\n");
        return 0;
    }

    // T�nh ti?n di?n theo b?c thang
    if (soDien < 50)
        tien = soDien * 10000;
    else if (soDien < 100)
        tien = soDien * 15000;
    else if (soDien < 150)
        tien = soDien * 20000;
    else if (soDien < 200)
        tien = soDien * 25000;
    else
        tien = soDien * 30000;

    printf("So dien tieu thu: %d kWh\n", soDien);
    printf("Tien dien phai tra: %ld VND\n", tien);

    return 0;
}

