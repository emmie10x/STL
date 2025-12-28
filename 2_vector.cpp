#include <iostream>   
#include <vector>     

using namespace std;

int main() {

    vector<int> v;
    // Empty vector
    // size = 0, capacity = 0

    vector<int> a(5, 1);
    // Creates vector of size 5 with all values = 1
    // a = {1,1,1,1,1}
    // TC: O(n)
    // SC: O(n)

    vector<int> last(a);
    // Copy constructor → copies vector a into last
    // TC: O(n)
    // SC: O(n)

    cout << "print last" << endl;
    for (int i : last) {
        cout << i << " ";
    }
    cout << endl;
    // Output: 1 1 1 1 1

    cout << "Capacity-> " << v.capacity() << endl;
    // capacity() → total allocated space
    // Output: 0
    // TC: O(1), SC: O(1)

    v.push_back(1);
    // Adds element at end
    // TC: O(1) amortized
    // SC: O(1)
    cout << "Capacity-> " << v.capacity() << endl;
    // Output: 1

    v.push_back(2);
    cout << "Capacity-> " << v.capacity() << endl;
    // Capacity may grow (usually doubles)
    // Output: 2

    v.push_back(3);
    cout << "Capacity-> " << v.capacity() << endl;
    cout << "Size-> " << v.size() << endl;
    // size() → number of elements
    // Output: Capacity-> 4, Size-> 3
    // TC: O(1), SC: O(1)

    cout << "Element at 2nd Index" << v.at(2) << endl;
    // at() → safe access with bounds checking
    // Output: 3
    // TC: O(1), SC: O(1)

    cout << "front " << v.front() << endl;
    // front() → first element
    // Output: 1
    // TC: O(1), SC: O(1)

    cout << "back " << v.back() << endl;
    // back() → last element
    // Output: 3
    // TC: O(1), SC: O(1)

    cout << "before pop" << endl;
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
    // Output: 1 2 3

    v.pop_back();
    // Removes last element
    // TC: O(1)
    // SC: O(1)

    cout << "after pop" << endl;
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
    // Output: 1 2

    cout << "before clear size " << v.size() << endl;
    // Output: 2

    v.clear();
    // Removes all elements
    // TC: O(n)
    // SC: O(1)

    cout << "after clear size " << v.size() << endl;
    // Output: 0

    return 0;
}
