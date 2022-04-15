#include <iostream>

using namespace std;

int main() {
    int line;
    cin >> line;

    for (int i = 1; i < line + 1; i++) {
        // for (int j = 0; j < line - i; j++) {
        for (int j = line - i; j > 0; j--) {
            cout << " ";
        }

        for (int k = 0; k < i; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}