#include <stdio.h>
int main() {
int giangay =200;
int giatuan =1300;
int songay;
int sotuan, songayle;
printf("Nhap so ngay o KS: ");
scanf("%d", &songay);//16
sotuan = songay/7;
songayle = songay%7;
printf("so ngay o KS: %d\n", songay);
printf("So tuan: %d, so ngay le: %d\n", sotuan, songayle);
printf("Tong tien: %d\n", sotuan*giatuan + songayle*giangay);
return 0;
}