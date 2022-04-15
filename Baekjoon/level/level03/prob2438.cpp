#include <iostream>

using namespace std;

int main() {
    int line;
    cin >> line;

    for (int i = 1; i < line+1; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}