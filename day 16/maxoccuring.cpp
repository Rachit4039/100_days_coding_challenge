#include <iostream>
using namespace std;

char getMaxOccuringChar(string str) {
    int arr[26] = {0};
    
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        int number = ch - 'a';
        arr[number]++;
    }

    int maxi = 0, ans = 0;
    for (int i = 0; i < 26; i++) {
        if (maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalarr = 'a' + ans;
    return finalarr;
}

int main() {
    string str;
    cin >> str;
    char v = getMaxOccuringChar(str);
    cout << v;

    return 0;
}
