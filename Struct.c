#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct individuo
{
    int id;
    char fn[100];
    char ln[100];
    char bd[100];
    char pn[100];

}tIndividuo;

int quantidade =0;

tIndividuo* add(int id, tIndividuo *vetIndividuo);

void imprimir(tIndividuo *vetIndividuo);
void remover(int id, tIndividuo *vetIndividuo);

int main(){
    setlocale(LC_ALL,"");
    tIndividuo *vetor;
    vetor = (tIndividuo*) malloc(sizeof(tIndividuo));

    vetor=add(0,vetor);

    vetor=add(1,vetor);

    vetor=add(2,vetor);
    imprimir(vetor);

    remover(1,vetor);
    imprimir(vetor);
    system("pause");

    remover(1,vetor);
        imprimir(vetor);
        system("pause");

    remover(0,vetor);
    imprimir(vetor);
system("pause");
     remover(2,vetor);

     imprimir(vetor);
      system("pause");

    return 0;
}
tIndividuo* add(int id, tIndividuo *vetIndividuo)
{
    int existe=0, i;
    for(int i=0; i<quantidade; i++)
    {
        if((vetIndividuo+i)->id==id)
        {
            existe=1;
        }
    }
    if(existe==0)
    {

        tIndividuo novo;
        novo.id=id;
        printf("\nDigite o nome: ");
        scanf("%s",novo.fn);
        printf("Digite o sobrenome: ");
        scanf("%s",novo.ln);
        printf("Digite a data de nascimento: ");
        scanf("%s",novo.bd);
        printf("Digite o telefone: ");
        scanf("%s",novo.pn);

        quantidade++;
        vetIndividuo = (tIndividuo*) realloc(vetIndividuo,quantidade*sizeof(tIndividuo));
        vetIndividuo[quantidade-1]=novo;
        printf("\nInserido com sucesso\n");
    }
    else
    {
        printf("\nO ID já existe\n");
    }
    return vetIndividuo;
}
void remover(int id, tIndividuo *vetIndividuo)
{
    int posicao = -1,i;
    for(i=0; i<quantidade; i++)
    {
        if(vetIndividuo[i].id==id)
        {
            posicao=i;
        }

    }
    if(posicao!=-1)
    {
        if(quantidade==1)
        {
            free(vetIndividuo);
        }
        else
        {
            for(i=posicao; i<quantidade-1; i++)
            {
                vetIndividuo[i]= vetIndividuo[i+1];
            }
            vetIndividuo = (tIndividuo*) realloc(vetIndividuo,(quantidade-1)*sizeof(tIndividuo));
        }
        quantidade--;
    printf("\nIndividuo removido\n");
    }else{
     printf("\nNão existe o ID\n");
    }
}

void imprimir(tIndividuo *vetIndividuo)
{
    for(int i=0; i<quantidade; i++)
    {
        printf("\nID: %d",vetIndividuo[i].id);
        printf("\nNome: %s",vetIndividuo[i].fn);
        printf("\nSobrenome: %s",vetIndividuo[i].ln);
        printf("\nData de nascimento: %s",vetIndividuo[i].bd);
        printf("\nTelefone: %s",vetIndividuo[i].pn);
    }
}
