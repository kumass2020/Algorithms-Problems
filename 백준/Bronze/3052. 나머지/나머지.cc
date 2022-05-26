#include <iostream>

using namespace std;

int main() {
    int a[10];
    int rem[10];
    int count = 0;

    for(int i=0; i<10; i++) {
        cin >> a[i];
        rem[i] = a[i] % 42;
    }

    for (int k = 0; k < 10; k++) {
        for (int j = k+1; j < 10; j++) {
            if (rem[k] == rem[j]){
                rem[j] = -1;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        if(rem[i] == -1)
            count++;
    }
        cout << 10 - count;

    return 0;
}