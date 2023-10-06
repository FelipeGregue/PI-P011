#include <iostream>
using namespace std;

int insere_meio(int *vetor, int &qtde, int elemento) {
    if (qtde >= 0) {
        qtde++;
        int meio = qtde / 2;
        for (int i = qtde - 1; i > meio; i--) {
            vetor[i] = vetor[i - 1];
        }
        vetor[meio] = elemento;
        return qtde;
    } else {
        return -1;
    }
}

int main() {
    int vetor[7] = {1, 2, 3, 4, 5, 6, 0}; 
    int qtde = 6;

    cout << "Vetor antes da inserção:" << endl;
    for (int i = 0; i < qtde; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    insere_meio(vetor, qtde, 100);

    cout << "Vetor após a inserção:" << endl;
    for (int i = 0; i < qtde; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
