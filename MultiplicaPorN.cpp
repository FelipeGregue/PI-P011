#include <iostream>

using namespace std;

void multiplica_por_n(int *vet, int qtde, int n) {
    for(int i = 0; i < qtde; i++) {
        vet[i] *= n;
    }
}

int main() {
    int vetor[5] = {1, 2, 3, 4, 5};
    int quantidade = 5;
    int multiplicador = 2;

    multiplica_por_n(vetor, quantidade, multiplicador);

    for(int i = 0; i < quantidade; i++) {
        cout << vetor[i] << " ";
    }

    return 0;
}
