#include <stdio.h>

int main() {
    int a = 8;  
    int b;        

    do {
        printf("nhap 1 so : ");
        scanf("%d", &b);
    } while (b != a);

    printf("da trung: %d\n", a);

    return 0;
}

