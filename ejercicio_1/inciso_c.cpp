#include <iostream>
#include <vector>

int main() {

    std::vector<int> integerVector = {5, 10, 15, 20};

    int index = 0;

    // Goes through the vector using a ranged based for loop
    for (const auto& element : integerVector) {
        std::cout << "Element " << index << ": " << element << std::endl;
        index++;
    }
    
    return 0;
}
