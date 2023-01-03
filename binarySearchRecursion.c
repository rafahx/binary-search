#include <stdio.h>
#include <stdlib.h>

int bin(int Vetor[], int valor, int inicio, int fim);

int main () {
    int array[10] = {1, 2, 5, 10, 12, 16, 20, 25, 30, 50};

    int res = bin(array, 25, 0, 9);

    if(res == -1)
        printf("Not find");
    else
        printf("Founded = %d", res);

    return 0;
}

/* 
    Busca binária recursiva aplicada
    @param vetor de números
    @param valor a ser identificado
    @param inicio do vetor
    @param fim do vetor
    @return indice do número dentro do vetor
*/
int bin(int Vetor[], int valor, int inicio, int fim) {
    int m;
    if (inicio > fim)
        return -1;
    else {
        m = (inicio + fim) / 2;
        if (valor == Vetor[m])
            return m;
        if (valor > Vetor[m])
            return bin(Vetor, valor, m+1, fim);
        else
            return bin(Vetor, valor, inicio, m-1);
    }
}
