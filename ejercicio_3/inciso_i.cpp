#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> Map1;

    Map1[1] = "One";
    Map1[3] = "Three";
    Map1[5] = "Five";
    Map1[7] = "Seven";

    int keyToFind = 5;

    // Find lower limit for key "5"
    auto lower = Map1.lower_bound(keyToFind);

    // Find upper limit to key "5"
    auto upper = Map1.upper_bound(keyToFind);

    // Print the elements
    std::cout << "Lower Bound (clave >= 5): " << lower->first << ": " << lower->second << std::endl;
    std::cout << "Upper Bound (clave > 5): " << upper->first << ": " << upper->second << std::endl;

    return 0;
}
