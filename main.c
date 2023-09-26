#include <stdio.h>

char value[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
char result[];

void converter(int note, int base) {
    int i;
    for (i = 0; note != 0; ++i) {
        result[i] = value[note % base];
        note /= base;
    }

    for (int j = i+1; j > -1; --j) {
        printf("%c", result[j]);
    }
}

int main() {
    int note[] = {20, 12, 13, 14, 16, 16, 18, 19};
    int i = 0;
    double total = 0;

    while(note[i]) {
        total += note[i];
        i++;
    }
    total /= i;

    printf("La moyenne est de %.2f\n", total);
    printf("La moyenne en base 2 est de ");
    converter(total, 2);
    printf("\nLa moyenne en base 16 est de ");
    converter(total, 16);
    return 0;
}
