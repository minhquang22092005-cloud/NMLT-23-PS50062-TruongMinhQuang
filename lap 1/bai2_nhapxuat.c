#include <stdio.h>
#include <string.h>

int main() {
    char mssv[20];
    char hoten[100];
    int namsinh, tuoi;
    float dtb;


    // Nhập dữ liệu
    printf("Nhap ma so sinh vien: ");
    scanf("%s", mssv);
    while (getchar() != '\n'); // Xóa ký tự newline còn lại trong bộ đệm 

    printf("Nhap ho va ten: ");
    fgets(hoten, sizeof(hoten), stdin);
    for (int i = 0; hoten[i] != '\0'; i++) {
        if (hoten[i] == '\n') {
            hoten[i] = '\0'; // Loại bỏ ký tự newline ở cuối chuỗi
            break;
        }
    }

    printf("Nhap nam sinh: ");
    scanf("%d", &namsinh);

    printf("Nhap diem trung binh: ");
    scanf("%f", &dtb);

    tuoi = 2026 - namsinh;

    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", hoten);
    printf("Nam sinh: %d\n", namsinh);
    printf("Tuoi: %d\n", tuoi);
    printf("Diem Trung Binh: %.2f\n", dtb);

    return 0;
}