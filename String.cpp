#include <iostream>
#include <vector>

std::vector<int> encontrarLetra(const std::string& texto, char letra) {
    std::vector<int> indices;

    for (int i = 0; i < texto.length(); i++) {
        if (texto[i] == letra) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    std::string texto = "exemplo";
    char letra = 'e';

    std::vector<int> indices = encontrarLetra(texto, letra);

    std::cout << "A letra '" << letra << "' foi encontrada nas posições: ";
    for (int i : indices) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
