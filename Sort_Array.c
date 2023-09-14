#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, j, k;

    int vetor[] = {10,8,2,7,20,15,3,32,9,1};

    for(i=0; i<10; i++)
    {
        printf("Elementos do vetor inicial: %d\n",vetor[i]);
    }

    for (i=0; i<10; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if (vetor[i] > vetor[j])
            {
                k = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = k;
            }
        }
    }

    printf("\nORDENANDO VETOR...\n\n");

    for(i=0; i<10; i++){

        printf("Elementos do vetor final: %d\n", vetor[i]);
    }

}

// isso foi adicionado pelo windows
