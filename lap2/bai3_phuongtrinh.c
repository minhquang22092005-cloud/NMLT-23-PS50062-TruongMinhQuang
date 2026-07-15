#include<stdio.h>
int main() {
    // Nhu cầu nhập: a, b, tính nghiệm x
    int a, b;
    float x;
    printf("Nhap a, b: ");
    scanf("%d %d", &a, &b);
    x = (float)-b / a;
    printf("phuong trinh %d x + %d = 0 co nghiem x = %.2f", a, b, x);
    return 0;
}