#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int n;

    cin >> n;
    
    bool ox[n];
    string a;
    int count = 0;
    int * score = new int[n]();
    int loop = 0;

    for(int j=0; j<n; j++) {
        cin >> a;
        for(int i=0; i<a.length(); i++) {
            if(a[i] == 'O') {
                score[j] += count + 1;
                count++;
            } else if (a[i] == 'X') {
                count = 0;
            } else {
                break;
            }
        }
        a.clear();
        count = 0;
    }

    for(int i=0; i<n; i++) {
        cout << score[i] << "\n";
    }

    return 0;
}