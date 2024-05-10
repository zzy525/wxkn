#include <stdio.h>

int main() {
    int num, sum = 0;
    int i;
    for (i = 0; i < 8; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            sum += num;
        }
    }
    printf("%d\n", sum);
    return 0;
}

