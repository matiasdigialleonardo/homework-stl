#include <iostream>
#include <vector>

int main() {
    
    // Creates an integer vector
    std::vector<int> integerVector = {5, 10, 15, 20};

    // Eliminates the second element of the vector (takes the position of the first one plus one position)
    integerVector.erase(integerVector.begin() + 1);

    return 0;
}
