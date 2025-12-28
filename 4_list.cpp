#include <iostream>
#include <list>      // For STL list (doubly linked list)

using namespace std;

int main() {

    list<int> l;
    // Empty list
    // Implemented as doubly linked list

    list<int> n(5, 100);
    // Creates list of size 5 with all values = 100
    // n = {100, 100, 100, 100, 100}
    // TC: O(n)
    // SC: O(n)

    cout << "Printing n" << endl;
    for (int i : n) {
        cout << i << " ";
    }
    cout << endl;
    // Output: 100 100 100 100 100

    l.push_back(1);
    // Inserts element at back
    // TC: O(1)
    // SC: O(1)

    l.push_front(2);
    // Inserts element at front
    // TC: O(1)
    // SC: O(1)

    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;
    // Output: 2 1

    l.erase(l.begin());
    // erase() → removes element at given iterator
    // TC: O(1) (iterator already known)
    // SC: O(1)

    cout << "after erase" << endl;
    for (int i : l) {
        cout << i << " ";
    }
    // Output: 1

    cout << endl;

    cout << "size of list" << l.size() << endl;
    // size() → number of elements in list
    // Output: 1
    // TC: O(1)
    // SC: O(1)

    return 0;
}
