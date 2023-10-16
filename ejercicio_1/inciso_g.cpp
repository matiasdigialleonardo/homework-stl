#include <iostream>
#include <vector>

int main() {
    
    // Creates an integer vector
    std::vector<int> integerVector = {5, 10, 15, 20};

    // Erase a range of 3 elements starting from the beginning
    integerVector.erase(integerVector.begin(), integerVector.begin() + 3);

    int index = 0;

    // Goes through the vector using a ranged based for loop
    for (const auto& element : integerVector) {
        std::cout << "Element " << index << ": " << element << std::endl;
        index++;
    }

    return 0;
}
