#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    char palavra[30];
    char inversa[30];
    int valor;

    printf("Digite uma palavra: ");
    gets(palavra);

    strcpy(inversa,palavra);
    strrev(inversa);

    valor = strcmp(palavra,inversa);

    if (valor == 0){

        return 1;

    }else

    return 0;

}

