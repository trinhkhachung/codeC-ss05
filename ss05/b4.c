#include <stdio.h>

int main() {
    int n;
    printf("moi nhap de tinh: ");
    scanf("%d", &n);

    while (n<1 || n>10) {
        printf("ko dung moi nhap lai: ");
        scanf("%d", &n);
    }

    for (int i=1; i<=10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }

    return 0;
}

