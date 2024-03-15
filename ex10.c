#include <stdio.h>

int main(int argc, char const *argv[])
{
    int soma = 0;

    for(int i = 2; i <= 100; i+=2){
        printf("%d  ", i);
        soma += i;
    }

    printf("\nSoma: %d", soma);
    return 0;
}
