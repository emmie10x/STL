#include <iostream>
#include <algorithm>   // For STL algorithms
#include <vector>

using namespace std;

int main() {

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    // v = {1, 3, 6, 7}  (sorted data required for binary_search, lower_bound, upper_bound)

    cout << "Finding 6-> "
         << binary_search(v.begin(), v.end(), 6) << endl;
    // binary_search() → checks if element exists
    // Output: 1 (true)
    // TC: O(log n)
    // SC: O(1)

    cout << "Lower bound-> "
         << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    // lower_bound() → first index where element >= key
    // Output: 2
    // TC: O(log n)
    // SC: O(1)

    cout << "Upper bound-> "
         << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;
    // upper_bound() → first index where element > key
    // Output: 2
    // TC: O(log n)
    // SC: O(1)

    int a = 3;
    int b = 5;

    cout << "max -> " << max(a, b);
    // max() → returns larger value
    // Output: 5
    // TC: O(1)
    // SC: O(1)

    cout << "min -> " << min(a, b);
    // min() → returns smaller value
    // Output: 3
    // TC: O(1)
    // SC: O(1)

    swap(a, b);
    // swap() → exchanges values
    // TC: O(1)
    // SC: O(1)

    cout << endl << "a-> " << a << endl;
    // Output: a-> 5

    string abcd = "abcd";

    reverse(abcd.begin(), abcd.end());
    // reverse() → reverses the range
    // Output string: dcba
    // TC: O(n)
    // SC: O(1)

    cout << "string-> " << abcd << endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    // rotate() → left rotation by 1 position
    // v becomes: {3, 6, 7, 1}
    // TC: O(n)
    // SC: O(1)

    cout << "after rotate" << endl;
    for (int i : v) {
        cout << i << " ";
    }
    // Output: 3 6 7 1

    return 0;
}
