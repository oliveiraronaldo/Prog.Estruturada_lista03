#include <stdio.h>

int main(int argc, char const *argv[])
{
    int skins;
    float preco;

    printf("Quantas skins comprar: ");
    scanf("%d", &skins);

    if(skins < 10){
        preco = skins * 1.3;
        printf("Quantidade: %d \nPreco total: %.2f", skins, preco);
    }else{
        preco = skins * 1.0;
        printf("Quantidade: %d \nPreco total: %.2f", skins, preco);
    }


    


    return 0;
}
