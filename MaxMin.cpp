#include <iostream>

using namespace std;

void maxmin(int vetor[], int n, int &maximo, int &minimo) {
    maximo = vetor[0];
    minimo = vetor[0];
    
    for(int i = 1; i < n; i++) {
        if(vetor[i] > maximo) {
            maximo = vetor[i];
        }
        if(vetor[i] < minimo) {
            minimo = vetor[i];
        }
    }
}

int main() {
    int vetor[] = {5, 3, 8, 2, 1, 9, 4, 7, 6};
    int n = sizeof(vetor) / sizeof(vetor[0]);
    int maximo, minimo;
    
    maxmin(vetor, n, maximo, minimo);
    
    cout << "Máximo: " << maximo << endl;
    cout << "Mínimo: " << minimo << endl;
    
    return 0;
}

//Alta coesão e baixo acoplamento.