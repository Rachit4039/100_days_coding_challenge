#include <iostream>
using namespace std;

int main() {
    int arr[5] = {12, 3, 4, 5, 6};
    int n;
    int i;
    bool found = false;

    cin >> n;

    for (i = 0; i < 5; i++) {
        if (arr[i] == n) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Element found at index: " << i << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
