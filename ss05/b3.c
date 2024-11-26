#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("moi nhap so nguyen duong: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("day k phai so nguyen duong");
        return 1; 
    }
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("tong so tu 1 den %d là: %d\n", n, sum);
    return 0;
}

