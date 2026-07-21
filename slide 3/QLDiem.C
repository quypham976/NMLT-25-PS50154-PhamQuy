#include <stdio.h>
int main(){
    float diem;
    printf("nhap diem ") ;
    scanf('%f', &diem);
    if(diem>=5){
        printf("Dau\n");
    }else{
        printf("Rot\n");
    }    


    //xep loai
    // 0 <= Yeu < 5 <= Trung binh < 6.5 <= Kha < 8 <= Gioi <= 10
    //diem nam trong 0 den 10
    if(diem>=8){
        printf("gioi");
    }else if(diem>=6.5){
        printf("kha");
    }else if(diem>=5){
        printf("trung binh");
    }else{
        printf("yeu\n");
    }   

    return 0;
}