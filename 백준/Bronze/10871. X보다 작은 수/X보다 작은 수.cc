#include <iostream>

using namespace std;

int main() {
    int n, x;

    cin >> n >> x;

    int a[n];

    for(int i=0; i<n; i++) {
        // scanf("%d", &a[i]);
        cin >> a[i];
    }

    for (int i=0; i<n; i++) {
        if (a[i] < x) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}