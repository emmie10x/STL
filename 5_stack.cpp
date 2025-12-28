#include <iostream>
#include <stack>     // For STL stack (LIFO)

using namespace std;

int main() {

    stack<string> s;
    // Stack follows LIFO (Last In First Out)

    s.push("Supriya");
    // push() → insert element on top
    // TC: O(1)
    // SC: O(1)

    s.push("Harshika");
    // TC: O(1)
    // SC: O(1)

    s.push("Asma");
    // TC: O(1)
    // SC: O(1)

    cout << "Top Element-> " << s.top() << endl;
    // top() → returns top element without removing
    // Output: Asma
    // TC: O(1)
    // SC: O(1)

    s.pop();
    // pop() → removes top element
    // Removes "Asma"
    // TC: O(1)
    // SC: O(1)

    cout << "Top Element-> " << s.top() << endl;
    // Output: Harshika
    // TC: O(1)
    // SC: O(1)

    cout << "size of stack " << s.size() << endl;
    // size() → number of elements in stack
    // Output: 2
    // TC: O(1)
    // SC: O(1)

    cout << "Empty or not " << s.empty() << endl;
    // empty() → checks whether stack is empty
    // Output: 0 (false)
    // TC: O(1)
    // SC: O(1)

    return 0;
}
