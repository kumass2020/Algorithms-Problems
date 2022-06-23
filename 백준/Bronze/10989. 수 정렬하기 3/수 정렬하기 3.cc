#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    
    int arr[10001] = {0, };
    for (int i = 0; i < N; i++) {
        int temp = 0;
        cin >> temp;
        arr[temp]++;
    }

    for (int l = 0; l < 10001; l++) {
        for (int k = 0; k < arr[l]; k++) {
            cout << l << "\n";
        }
    }
    
    return 0;
}