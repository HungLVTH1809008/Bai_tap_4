#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
bool valiadatedata(int a, int b){
    if (a <=0 || b<=0){
        printf("do dai mot canh cua tam giac phai lon hon 0:");
        return false;
    } else if (a + b <= 0){
        printf(" tong do dai hai canh khong duoc nho hon 0");
        return false;
    }
    return true;

}
float caculatecanhhuyentamgiacvuong(int a, int b){
    return (float)sqrt(a*a + b*b);
}
int main() {
    int a, b;
   printf(" nhap vao canh thu nhat:\n");
   scanf("%d",&a);
    printf(" nhap vao canh thu hai:\n");
   scanf("%d",&b);
    bool isvaldatedata = valiadatedata(a, b);
    if( isvaldatedata){
        printf("do dai canh huyen cua tam giac vuong la %.2f", caculatecanhhuyentamgiacvuong(a, b));
    }

    return 0;
}