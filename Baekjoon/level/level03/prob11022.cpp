#include <iostream>

using namespace std;

int main() {
    int test_num;

    cin >> test_num;

    int a[test_num], b[test_num];

    for (int i = 0; i < test_num; i++) {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < test_num; i++) {
        cout << "Case #" << i+1 << ": " << a[i] << " + " << b[i] << " = " << a[i] + b[i] << "\n";
    }

    return 0;
}