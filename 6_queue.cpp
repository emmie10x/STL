#include <iostream>
#include <queue>     // For STL queue (FIFO)

using namespace std;

int main() {

    queue<string> q;
    // Queue follows FIFO (First In First Out)

    q.push("Supriya");
    // push() → insert element at back
    // TC: O(1)
    // SC: O(1)

    q.push("Harshika");
    // TC: O(1)
    // SC: O(1)

    q.push("Asma");
    // TC: O(1)
    // SC: O(1)

    cout << "Size before pop " << q.size() << endl;
    // size() → number of elements
    // Output: 3
    // TC: O(1)
    // SC: O(1)

    cout << "First Element " << q.front() << endl;
    // front() → first inserted element
    // Output: Supriya
    // TC: O(1)
    // SC: O(1)

    q.pop();
    // pop() → removes front element
    // Removes "Supriya"
    // TC: O(1)
    // SC: O(1)

    cout << "First Element " << q.front() << endl;
    // Output: Harshika
    // TC: O(1)
    // SC: O(1)

    cout << "Size after pop " << q.size() << endl;
    // Output: 2
    // TC: O(1)
    // SC: O(1)

    return 0;
}
