#include <iostream>
using namespace std;

void findGreater(int a, int b, int c, int d) {
    if (a > b && a > c && a > d) {
        cout << a;
    } else if (b > c && b > a && b > d) {
        cout << b;
    } else if (c > a && c > b && c > d) {
        cout << c;
    } else {
        cout << d;
    }
}

int main() {
    int a, b, c, d;
    cin >> a;
    cin>>b;
    cin>>c;
    cin>>d;

    findGreater(a, b, c, d);

    return 0;
}
