#include <iostream>
using namespace std;

int main() {
    int n = 5; // You can change this value to print a different size triangle

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
