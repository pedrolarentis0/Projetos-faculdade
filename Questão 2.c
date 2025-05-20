#include <stdio.h>

int main() {
    int i;
    
    i = 1;

    while (i <= 10) {
        printf("%d. O comando de repeticao repete tudo o que esta dentro do seu bloco (ou escopo).\n", i);
        i++;
    }
    
    printf("Tudo o que estiver fora do comando de repeticao sera executado somente uma vez.");

    return 0;
}
