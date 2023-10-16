#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    
    // Creates an integer vector
    std::vector<int> integerVector = {5, 10, 15, 20};

    int target = 10;

    // Searches for the target element
    auto result = std::find(integerVector.begin(), integerVector.end(), target);
    
    return 0;
}
