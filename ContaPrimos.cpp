#include <iostream>
#include <vector>
using namespace std;

bool eh_primo(int num) {
    if (num < 2) return false;  // Números menores que 2 não são primos
    if (num == 2) return true; // 2 é primo
    if (num % 2 == 0) return false; // Números pares não são primos

    for (int i = 3; i*i <= num; i += 2) {
        if (num % i == 0) return false; // Se é divisível por algum número, não é primo
    }

    return true; // Se não foi divisível por nenhum número, é primo
}

int conta_primos(vector<int>& vet) {
    int contador = 0;

    for (int num : vet) {
        if (eh_primo(num)) {
            contador++;
        }
    }

    return contador;
}

int main() {
    vector<int> vetor = {2, 3, 4, 5, 6, 7, 8, 9, 10};

    int quantidade_primos = conta_primos(vetor);

    cout << "Quantidade de números primos: " << quantidade_primos << endl;

    return 0;
}
