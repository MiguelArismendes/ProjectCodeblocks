#include <stdio.h>
#include <stdlib.h>

int main(void){

    int ano;

    int verificar(int ano);

    printf("Digite um ano: ");
    scanf("%d",&ano);

    if (verificar(ano) == 1){
        printf("\n%d eh um ano bissexto\n",ano);
    }
    else
        printf("\n%d nao eh um  ano bissexto\n",ano);
    return 0;
}

int verificar(int x)
{
    if( x%400 ==0 || x%4 ==0 && x%100 != 0)
        return 1;
    else
        return 0;
}
