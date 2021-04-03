#include <stdio.h>
#include <stdlib.h>

int main () {
    int A, B, X;

    printf("\n Digite um numero : \t");
    scanf("%d", &A);

    printf("\n Digite um segundo numero : \t");
    scanf("%d", &B);

    if(A != B) {
        printf("\n Os Numeros sao diferentes");

    } else {
        printf("\n Os Numeros sao Iguais");
    }

return 0;
}
