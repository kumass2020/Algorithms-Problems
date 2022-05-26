#include <iostream>

using namespace std;

int main() {
    int a[9];
    int max = -1;
    int index;
    for(int i=0; i<9; i++) {
        cin >> a[i];    
        if(a[i] > max) {
            max = a[i];
            index = i+1;
        }     
    }

    cout << max << "\n";
    cout << index;

    return 0;
}