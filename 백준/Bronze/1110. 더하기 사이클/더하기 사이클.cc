#include <iostream>

using namespace std;

int main() {
    int n;
    
    cin >> n;
    int a = n;

    int cycle = 1;

    while(true) {
        if(n >= 0 && n < 10) {
            n = n * 10 + n;
        } else if ( n >= 10 && n <= 99) {
            n = (n % 10 * 10) + (n / 10 + n % 10) % 10;
        }
        
        if (n == a) {
            break;
        }
        cycle++;
    }
    cout << cycle;

    return 0;
}