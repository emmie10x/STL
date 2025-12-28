#include <iostream>
#include <deque>     // For STL deque

using namespace std;

int main() {

    deque<int> d;
    // Deque = Double Ended Queue
    // Allows insertion & deletion from BOTH front and back

    d.push_back(1);
    // Inserts element at back
    // TC: O(1)
    // SC: O(1)

    d.push_front(2);
    // Inserts element at front
    // TC: O(1)
    // SC: O(1)

    for (int i : d) {
        cout << i << " ";
    }
    // Output: 2 1

    d.pop_front();
    // Removes element from front
    // TC: O(1)
    // SC: O(1)

    cout << endl;

    for (int i : d) {
        cout << i << " ";
    }
    // Output: 1

    cout << endl;

    // d.pop_front();   // (commented in original code)

    cout << "Print First Index Element-> " << d.at(1) << endl;
    // at() → safe access with bounds checking
    // TC: O(1)
    // SC: O(1)

    cout << "front " << d.front() << endl;
    // front() → first element
    // TC: O(1)
    // SC: O(1)

    cout << "back " << d.back() << endl;
    // back() → last element
    // TC: O(1)
    // SC: O(1)

    cout << "Empty or not " << d.empty() << endl;
    // empty() → checks if deque is empty
    // Output: 0 or 1
    // TC: O(1)
    // SC: O(1)

    cout << "before erase " << d.size() << endl;
    // size() → number of elements
    // TC: O(1)
    // SC: O(1)

    d.erase(d.begin(), d.begin() + 1);
    // erase() → removes element(s) using iterator range
    // TC: O(n)
    // SC: O(1)

    cout << "after erase " << d.size() << endl;

    for (int i : d) {
        cout << i << endl;
    }

    return 0;
}
