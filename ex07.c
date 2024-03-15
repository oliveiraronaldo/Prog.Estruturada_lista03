#include <stdio.h>

int main(int argc, char const *argv[])
{
    for(int i = 1; i < 100; i++){
        if(i % 4 == 0){
            printf("plim, ");
        }else{
            printf("%d, ", i);
        }
    }
    return 0;
}
