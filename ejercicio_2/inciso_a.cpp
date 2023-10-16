#include <iostream>
#include <vector>

int main() {
    std::vector<int> integerVector = {5, 10, 15, 20};

    std::cout << "Contents of the vector using an iterator: ";

    for (std::vector<int>::iterator it = integerVector.begin(); it != integerVector.end(); ++it) {
        std::cout << *it << " ";
    }

    std::cout << std::endl;

    return 0;
}
