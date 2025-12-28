#include <iostream>
#include <set>      // For STL set (ordered, unique elements)

using namespace std;

int main() {

    set<int> s;
    // Set stores UNIQUE elements in SORTED order
    // Implemented using Red-Black Tree(self-balancing BST)to guarantee O(log n) time for insertion, deletion, and search.

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    // insert() → duplicates are ignored automatically
    // TC: O(log n) per insert
    // SC: O(1) extra per insert

    for (auto i : s) {
        cout << i << endl;
    }
    cout << endl;
    // Output (sorted & unique):
    // 0
    // 1
    // 5
    // 6

    set<int>::iterator it = s.begin();
    // begin() → iterator to first (smallest) element
    // TC: O(1)
    // SC: O(1)

    it++;
    // Move iterator to next element

    s.erase(it);
    // erase(iterator) → removes element at iterator position
    // Removes element: 1
    // TC: O(log n)
    // SC: O(1)

    for (auto i : s) {
        cout << i << endl;
    }
    cout << endl;
    // Output:
    // 0
    // 5
    // 6

    cout << "-5 is present or not -> " << s.count(-5) << endl;
    // count() → returns 1 if present, else 0
    // Output: 0
    // TC: O(log n)
    // SC: O(1)

    set<int>::iterator itr = s.find(5);
    // find() → returns iterator to element if found
    // TC: O(log n)
    // SC: O(1)

    for (auto it = itr; it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    // Output:
    // 5 6

    return 0;
}
