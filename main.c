#include <stdio.h>

int binary(int dec) {
    int bin = 0;
    int i = 1;
    while (dec > 0) {
        bin += (dec % 2) * i;
        dec /= 2;
        i *= 10;
    }
    return bin;
}

int main() {
    int d, n, s;

    printf("Enter the size of the set: \n");
    scanf("%d", &n);

    int decs[n];
    int bins[n];

    printf("Enter the elements of the set: \n");
    for (d = 0; d < n; d++) {
        scanf("%d", &s);
        decs[d] = s;
    }

    for (int i = 0; i < n; i++) {
        bins[i] = binary(decs[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d | %d\n", decs[i], bins[i]);
    }
    return 0;
}