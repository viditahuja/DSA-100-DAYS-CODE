#include <stdio.h>

int main() {
    int p, q;

    if (scanf("%d", &p) != 1) return 0;
    int log1[p];
    for (int i = 0; i < p; i++) {
        scanf("%d", &log1[i]);
    }

    if (scanf("%d", &q) != 1) return 0;
    int log2[q];
    for (int i = 0; i < q; i++) {
        scanf("%d", &log2[i]);
    }

    int i = 0, j = 0;

    while (i < p && j < q) {
        if (log1[i] <= log2[j]) {
            printf("%d ", log1[i]);
            i++;
        } else {
            printf("%d ", log2[j]);
            j++;
        }
    }

    while (i < p) {
        printf("%d%c", log1[i], (i == p - 1 && j == q) ? '\n' : ' ');
        i++;
    }

    while (j < q) {
        printf("%d%c", log2[j], (j == q - 1) ? '\n' : ' ');
        j++;
    }

    return 0;
}