#include <iostream>

using namespace std;

int* intercala(int *vet1, int tam1, int *vet2, int tam2) {
    int *resultado = new int[tam1 + tam2]; 

    int i = 0, j = 0, k = 0;

    
    while (i < tam1 && j < tam2) {
        resultado[k++] = vet1[i++];
        resultado[k++] = vet2[j++];
    }

   
    while (i < tam1) {
        resultado[k++] = vet1[i++];
    }

    while (j < tam2) {
        resultado[k++] = vet2[j++];
    }

    return resultado;
}


int main() {
    int vet1[] = {1, 3, 5, 7};
    int tam1 = 4;

    int vet2[] = {2, 4, 6};
    int tam2 = 3;

    int* resultado = intercala(vet1, tam1, vet2, tam2);

    int tam_resultado = tam1 + tam2;

    cout << "Vetor intercalado: ";
    for (int i = 0; i < tam_resultado; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;

    delete[] resultado; 

    return 0;
}
