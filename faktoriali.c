
#include <stdio.h>

int faktoriali(int n) {
    int rezultati = 1;
    for (int i = 2; i <= n; i++) {
        rezultati *= i;
    }
    return rezultati;
}

int main() {
    int numri;
    printf("Vendosni nje numer pozitiv: ");
    scanf("%d", &numri);

    if (numri < 0) {
        printf("Ju lutem vendosni nje numer pozitiv!\n");
    } else {
        int rezultati = faktoriali(numri);
        printf("Faktoriali i %d eshte %d\n", numri, rezultati);
    }

    return 0;
}
