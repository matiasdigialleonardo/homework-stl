#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    // Creates an integer vector
    std::vector<int> integerVector = {5, 10, 15, 20};

    int target = 10;

    // Searches for the target element
    auto result = std::find(integerVector.begin(), integerVector.end(), target);

    if (result != integerVector.end())
    {
    std::cout << "Element " << target << " found in the vector." << std::endl;
    }

    // Remove the element
    integerVector.erase(result);

    int index = 0;

    // Goes through the vector using a ranged based for loop
    for (const auto& element : integerVector)
    {
        std::cout << "Element " << index << ": " << element << std::endl;
        index++;
    };

    return 0;
}