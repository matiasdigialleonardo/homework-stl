#include <iostream>
#include <vector>

int main() {
    
    // Creates an integer vector
    std::vector<int> integerVector = {5, 10, 15, 20};

    // Erase a range of 3 elements starting from the beginning
    integerVector.erase(integerVector.begin(), integerVector.begin() + 3);

    return 0;
}
