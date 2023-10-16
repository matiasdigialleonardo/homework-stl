#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> map1;

    // Inserta elementos en el mapa
    map1[3] = "Three";
    map1[1] = "One";
    map1[4] = "Four";
    map1[2] = "Two";

    auto map2 = map1;

    // Prints the elements of the map
    for (const auto& pair : map1) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    return 0;
}
