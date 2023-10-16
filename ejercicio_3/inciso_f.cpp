#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> map1;

    map1[1] = "One";
    map1[2] = "Two";
    map1[3] = "Three";
    map1[4] = "Four";
    map1[5] = "Five";

    int keyToDelete = 4;

    // If the key is found, delete it
    auto it = map1.find(keyToDelete);
    if (it != map1.end()) {
        map1.erase(it);
    }

    return 0;
}
