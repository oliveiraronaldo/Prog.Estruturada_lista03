#include <stdio.h>

int main(int argc, char const *argv[])
{
    for(int i = 1; i <= 10; i++){
        printf("%d: Ronaldo\n", i);
    }

    for(int i = 1; i <= 10; i++){
        if(i < 10){
            printf("Ronaldo, ");
        }else{
            printf("Ronaldo");
        }
    }


    return 0;
}
