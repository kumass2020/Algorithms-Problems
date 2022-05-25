#include <iostream>

using namespace std;

int main() {
    int a[9];
    int max = -1;
    int index;
    for(int i=0; i<9; i++) {
        cin >> a[i];         
    }

    for(int k=0; k<9; k++) {
        if(a[k] > max) {
            max = a[k];
            index = k+1;
        }
    }

    cout << max << "\n";
    cout << index;

    return 0;
}