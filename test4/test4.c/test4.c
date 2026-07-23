#include <stdio.h>
int main(){
    for( int i = 1;i <= 10; i++) {
       printf("\n");

       for (int h = 2; h <= 10; h++) {
        printf(" %d * %d = %d\t", h , i ,i * h);
       }
    }
       

    return 0;
}
