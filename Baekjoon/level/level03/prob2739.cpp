#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i=1; i<10; i++) {
        int result = a * i;
        cout << a << " * " << i << " = " << result << endl;
    }
    return 0;
}