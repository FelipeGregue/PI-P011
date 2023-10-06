#include <iostream>
#include <string>
using namespace std;

string codificar(string texto) {
    for (char &c : texto) {
        if (isalpha(c)) {
            if (c == 'z') {
                c = 'a';
            } else if (c == 'Z') {
                c = 'A';
            } else {
                c++;
            }
        }
    }
    return texto;
}

string decodificar(string texto_codificado) {
    for (char &c : texto_codificado) {
        if (isalpha(c)) {
            if (c == 'a') {
                c = 'z';
            } else if (c == 'A') {
                c = 'Z';
            } else {
                c--;
            }
        }
    }
    return texto_codificado;
}

int main() {
    string texto_original = "Residência em Tecnologia da Informação e Comunicação";
    string texto_codificado = codificar(texto_original);
    string texto_decodificado = decodificar(texto_codificado);

    cout << "Texto Original: " << texto_original << endl;
    cout << "Texto Codificado: " << texto_codificado << endl;
    cout << "Texto Decodificado: " << texto_decodificado << endl;

    return 0;
}
