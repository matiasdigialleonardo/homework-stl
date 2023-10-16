#include <iostream>
#include <unordered_map>
#include <string>
#include <sstream>

int main() {
    std::string frase = "Existen dos tipos de lenguajes de programación: por un lado, aquellos de los que la gente se queja todo el rato; por otro, los que nadie utiliza.";

    // Convierte la frase en un flujo de palabras
    std::istringstream stream(frase);
    std::string palabra;
    
    // The key is the word and the value (int), the number of times is repeated
    std::unordered_map<std::string, int> wordCount;

    // Reads and counts each word
    while (stream >> palabra) {
        // Eliminates punctuation and transforms to lower case
        for (char& c : palabra) {
            if (std::ispunct(c)) {
                c = ' ';
            } else {
                c = std::tolower(c);
            }
        }

        // Increments the word count in the umap
        wordCount[palabra]++;
    }

    for (const auto& pair : wordCount) {
        std::cout << "Palabra: " << pair.first << ", Repeticiones: " << pair.second << std::endl;
    }

    return 0;
}
