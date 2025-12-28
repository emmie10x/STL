#include <iostream>
#include <unordered_map>   // For STL unordered_map (hash table)

using namespace std;

int main() {

    unordered_map<int, string> m;
    // unordered_map stores key-value pairs
    // Keys are UNIQUE but NOT in sorted order
    // Implemented using Hash Table

    m[1] = "Supriya";
    m[13] = "Harshika";
    m[2] = "Asma";
    // operator[] → insert or update value
    // Average TC: O(1)
    // Worst TC: O(n)
    // SC: O(1) per insertion

    m.insert({5, "bheem"});
    // insert() → adds key-value pair
    // Avg TC: O(1)
    // Worst TC: O(n)
    // SC: O(1)

    cout << "before erase" << endl;
    for (auto i : m) {
        cout << i.first << " " << i.second << endl;
    }
    // Output order is RANDOM (no sorting guaranteed)

    cout << "finding -13 -> " << m.count(-13) << endl;
    // count() → returns 1 if key exists, else 0
    // Output: 0
    // Avg TC: O(1)
    // Worst TC: O(n)
    // SC: O(1)

    // m.erase(13);
    // erase(key) → removes element with given key
    // Avg TC: O(1)
    // Worst TC: O(n)
    // SC: O(1)

    cout << "after erase" << endl;
    for (auto i : m) {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;
    // Output depends on hashing order

    auto it = m.find(5);
    // find() → returns iterator if key found
    // Avg TC: O(1)
    // Worst TC: O(n)
    // SC: O(1)

    for (auto i = it; i != m.end(); i++) {
        cout << (*i).first << endl;
    }
    // Output: keys starting from 5 (order not guaranteed)

    cout << "Empty or not -> " << m.empty() << endl;
    // empty() → checks if map is empty
    // Output: 0 (false)
    // TC: O(1)
    // SC: O(1)

    return 0;
}
