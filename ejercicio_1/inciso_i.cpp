#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    
    // Creates an integer vector
    std::vector<int> integerVector = {5, 10, 15, 20};

    int target = 10;

    // Searches for the target element
    auto result = std::find(integerVector.begin(), integerVector.end(), target);

    if (result != integerVector.end()) {
    std::cout << "Element " << target << " found in the vector." << std::endl;

    // Remove the element
    integerVector.erase(result);

    std::cout << "Element " << target << " removed from the vector." << std::endl;
    } else {
        std::cout << "Element " << target << " not found in the vector." << std::endl;
    }

    return 0;
}
