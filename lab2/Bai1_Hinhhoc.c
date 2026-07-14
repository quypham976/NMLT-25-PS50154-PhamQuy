#include <stdio.h>

#define PI 3.14159

int main() {
    // Bài 1: Hình chữ nhật
    float chieuDai, chieuRong;
    float chuViHCN, dienTichHCN;

    printf("===== HINH CHU NHAT =====\n");
    printf("Nhap chieu dai: ");
    scanf("%f", &chieuDai);

    printf("Nhap chieu rong: ");
    scanf("%f", &chieuRong);

    chuViHCN = (chieuDai + chieuRong) * 2;
    dienTichHCN = chieuDai * chieuRong;

    printf("Chu vi hinh chu nhat = %.2f\n", chuViHCN);
    printf("Dien tich hinh chu nhat = %.2f\n\n", dienTichHCN);

    // Bài 2: Hình tròn
    float banKinh;
    float chuViHT, dienTichHT;

    printf("===== HINH TRON =====\n");
    printf("Nhap ban kinh: ");
    scanf("%f", &banKinh);

    chuViHT = 2 * PI * banKinh;
    dienTichHT = PI * banKinh * banKinh;

    printf("Chu vi hinh tron = %.2f\n", chuViHT);
    printf("Dien tich hinh tron = %.2f\n", dienTichHT);

    return 0;
}


