#include <stdio.h>
int main(){
    int Toan , Ly , Hoa;
    float diemTB;
    printf("nhap diem Toan, Ly, Hoa: ");
    scanf("%d %d %d", &Toan, &Ly, &Hoa);
    diemTB = ( Toan*3 + Ly*2 + Hoa) / 6.0;
    printf("diem trung binh: %.2f", diemTB);
    return 0;
}

