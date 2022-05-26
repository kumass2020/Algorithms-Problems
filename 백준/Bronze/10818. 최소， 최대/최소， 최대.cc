#include <iostream>

using namespace std;

int main() {
    int n, max, min;
    cin >> n;

    int a[n];
    
    for(int i=0; i<n; i++) {
        cin >> a[i];

        if(i == 0) {
            max = min = a[i];
        }

        if (max < a[i]) max = a[i];
        if (min > a[i]) min = a[i];
    }

    cout << min << " " << max << "\n";

    return 0;
}