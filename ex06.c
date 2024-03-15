#include <stdio.h>

int main(int argc, char const *argv[])
{
    for(int i = 300; i > 100; i--){
        if(i % 4 == 0){
            printf("%d  ", i);
        }
    }
    return 0;
}
