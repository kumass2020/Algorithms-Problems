#include <iostream>

using namespace std;

int main() {
    int H, M;
    cin >> H;
    cin >> M;

    if(M < 45) {
        M = 60 + M - 45;
        H = H - 1;
            
        if(H < 0) {
            H = 23;
        }

    } else {
        M = M - 45;
    }

    cout << H << " " << M << endl;

    return 0;
}