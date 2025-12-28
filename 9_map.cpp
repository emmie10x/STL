#include <iostream>
#include <map>      // For STL map (ordered key-value pair)

using namespace std;

int main() {

    map<int, string> m;
    // map stores data as (key, value)
    // Keys are UNIQUE and stored in SORTED order
    // Implemented using Red-Black Tree

    m[1] = "babbar";
    m[13] = "kumar";
    m[2] = "love";
    // operator[] → inserts key-value pair
    // TC: O(log n)
    // SC: O(1) per insert

    m.insert({5, "bheem"});
    // insert() → adds key-value pair
    // TC: O(log n)
    // SC: O(1)

    cout << "before erase" << endl;
    for (auto i : m) {
        cout << i.first << " " << i.second << endl;
    }
    // Output (sorted by key):
    // 1 babbar
    // 2 love
    // 5 bheem
    // 13 kumar

    cout << "finding -13 -> " << m.count(-13) << endl;
    // count() → checks if key exists
    // Output: 0
    // TC: O(log n)
    // SC: O(1)

    // m.erase(13);
    // erase(key) → removes element with given key
    // TC: O(log n)
    // SC: O(1)

    cout << "after erase" << endl;
    for (auto i : m) {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;
    // Output (same since erase is commented)

    auto it = m.find(5);
    // find() → returns iterator to key if found
    // TC: O(log n)
    // SC: O(1)

    for (auto i = it; i != m.end(); i++) {
        cout << (*i).first << endl;
    }
    // Output:
    // 5
    // 13

    return 0;
}
