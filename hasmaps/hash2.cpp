#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    // 1. Initialization
    unordered_map<string, int> fruitCount = {
        {"apple", 10},
        {"banana", 5},
        {"orange", 8}
    };

    // 2. Insertion
    fruitCount.insert({"grape", 12}); // Using insert
    fruitCount["pear"] = 7;            // Using the [] operator

    // 3. Accessing Elements
    cout << "Count of apples: " << fruitCount["apple"] << endl; // Access using []
    
    // Using at() method for access
    try {
        cout << "Count of bananas: " << fruitCount.at("banana") << endl; // Access using at()
    } catch (const out_of_range& e) {
        cout << "Banana not found!" << endl;
    }

    // 4. Deletion
    fruitCount.erase("orange"); // Remove "orange" from the map

    // 5. Searching
    auto search = fruitCount.find("banana");
    if (search != fruitCount.end()) {
        cout << "Found banana with count: " << search->second << endl;
    } else {
        cout << "Banana not found!" << endl;
    }

    // 6. Traversal
    cout << "Fruit counts:" << endl;
    for (const auto& pair : fruitCount) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // 7. Size and Count
    cout << "Total fruits: " << fruitCount.size() << endl; // Get the number of elements
    cout << "Count of grapes: " << fruitCount.count("grape") << endl; // Count occurrences of "grape"

    return 0;
}