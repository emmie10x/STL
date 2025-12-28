#include <iostream>
#include <queue>     // For priority_queue
using namespace std;

int main() {

    // max heap (default priority_queue)
    priority_queue<int> maxi;
    // By default → largest element has highest priority

    // min heap
    priority_queue<int, vector<int>, greater<int>> mini;
    // smallest element has highest priority

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    // push() → inserts element into heap
    // TC: O(log n)
    // SC: O(1) extra per insert

    cout << "size-> " << maxi.size() << endl;
    // size() → total elements
    // Output: 4
    // TC: O(1), SC: O(1)

    int n = maxi.size();
    for (int i = 0; i < n; i++) {
        cout << maxi.top() << " ";
        // top() → returns highest priority element
        // For max heap → largest element
        // TC: O(1), SC: O(1)

        maxi.pop();
        // pop() → removes highest priority element
        // TC: O(log n)
        // SC: O(1)
    }
    cout << endl;
    // Output (max heap): 3 2 1 0

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);
    // push() into min heap
    // TC: O(log n)
    // SC: O(1)

    int m = mini.size();
    for (int i = 0; i < m; i++) {
        cout << mini.top() << " ";
        // top() → smallest element in min heap
        // TC: O(1)

        mini.pop();
        // pop() → removes smallest element
        // TC: O(log n)
    }
    cout << endl;
    // Output (min heap): 0 1 3 4 5

    cout << "khaali h kya bhai ?? -> " << mini.empty() << endl;
    // empty() → checks if heap is empty
    // Output: 1 (true)
    // TC: O(1), SC: O(1)

    return 0;
}
