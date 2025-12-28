//arrays in STL (Standard Template Library) in C++ are fixed-size sequences that store elements of the same type in contiguous memory locations. They provide a way to manage collections of data efficiently. 

#include <iostream>   
#include <array>      

using namespace std;

int main() {

    int basic[3] = {1, 2, 3};  
    // C-style array
    // TC: O(1) for access
    // SC: O(1) extra space (fixed size)

    array<int, 4> a = {1, 2, 3, 4};  
    // STL array
    // TC: O(n) for initialization
    // SC: O(1) extra space (fixed size array)

    int size = a.size();  
    // size()
    // TC: O(1)
    // SC: O(1)

    for (int i = 0; i < size; i++) {
        cout << a[i] << endl;  
        // Access using []
        // TC: O(1) per access → total O(n)
        // SC: O(1)
    }

    cout << "Element at 2nd Index-> " << a.at(2) << endl;  
    // at()
    // TC: O(1)
    // SC: O(1)
    // Safe access with bounds checking

    cout << "Empty or not-> " << a.empty() << endl;  
    // empty()
    // TC: O(1)
    // SC: O(1)

    cout << "First Element-> " << a.front() << endl;  
    // front()
    // TC: O(1)
    // SC: O(1)

    cout << "Last Element-> " << a.back() << endl;  
    // back()
    // TC: O(1)
    // SC: O(1)
}
