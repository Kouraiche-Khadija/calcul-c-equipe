#include <stdio.h>

int produit(int a, int b) {
    return a * b;
}

int main() {
    int a = 3, b = 4;
    printf("Message depuis main - conflit resolu\n");
    printf("Produit : %d\n", produit(a, b));

    return 0;
}