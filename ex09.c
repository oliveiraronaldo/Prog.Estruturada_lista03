#include <stdio.h> 

int main(int argc, char const *argv[])
{
    int soma = 0;

    for(int i = 1; i <= 10; i++){
        printf("%d  ", i);
        soma += i;
    }

    printf("\nSoma: %d", soma);
    return 0;
}
