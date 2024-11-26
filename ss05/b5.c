#include <stdio.h>

int main() {
    for (int i=1; i<=9; i++) {
        for(int n=1; n<=10; n++){
        	printf("%d x %d = %d\n",i,n,i*n);
		}
    }

    return 0;
}

