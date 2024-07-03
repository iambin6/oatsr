#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int option;
    printf("*------MENU------*\n");
    printf("1. Tinh trung binh cong 2 so thap phan\n");
    printf("2. Tim so lon nhat trong ba so\n");
    printf("3. Nhap vao chuoi\n");
    printf("4. Xoa ki tu dac biet\n");
    printf("5. Phan biet so chan va so le\n");
    printf("Quit the MENU\n");
    printf("Nhap vao lua chon: ");
    scanf("%d", &option);

    switch (option) {
        case 1: {
            double a, b;
            printf("Nhap vao hai so thap phan: ");
            scanf("%lf %lf", &a, &b);
            printf("Trung binh cong: %.2lf\n", (a + b) / 2);
            break;
        }
        case 2: {
            int x, y, z;
            printf("Nhap vao ba so nguyen: ");
            scanf("%d %d %d", &x, &y, &z);
            if (x > y && x > z) {
                printf("So lon nhat: %d\n", x);
            } else if (y > x && y > z) {
                printf("So lon nhat: %d\n", y);
            } else {
                printf("So lon nhat: %d\n", z);
            }
            break;
        }
        case 3: {
            char s[101];
            printf("Nhap vao chuoi: ");
            getchar();
            fgets(s, sizeof(s), stdin);
            s[strcspn(s, "\n")] = '\0';
            int count = 0;
            for (int i = 0; i < strlen(s); i++) {
                char c = tolower(s[i]);
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                    count++;
                }
            }
            printf("So luong ky tu nguyen am: %d\n", count);
            break;
        }
        case 4: {
            char w[101];
            char output[101];
            int j = 0;
            printf("Nhap vao chuoi: ");
            getchar();
            fgets(w, sizeof(w), stdin);

            for (int i = 0; w[i] != '\0'; i++) {
                if (isalpha(w[i]) || isspace(w[i])) {
                    output[j++] = w[i];
                }
            }
            output[j] = '\0';

            printf("OUTPUT: \n%s", output);
            break;
        }
        case 5: {
            int n;
            printf("Nhap vao so phan tu cua mang: ");
            scanf("%d", &n);
            int array[n];
            printf("Nhap vao cac phan tu cua mang: ");
            for (int i = 0; i < n; i++) {
                scanf("%d", &array[i]);
            }
            printf("OUTPUT: \n");
            printf("So le: ");
            for (int i = 0; i < n; i++) {
                if (array[i] % 2 != 0) {
                    printf("%d ", array[i]);
                }
            }
            printf("\n");
            printf("So chan: ");
            for (int i = 0; i < n; i++) {
                if (array[i] % 2 == 0) {
                    printf("%d ", array[i]);
                }
            }
            printf("\n");
            break;
        }
        default: {
            printf("Lua chon khong hop le!\n");
            break;
        }
    }

    return 0;
}
