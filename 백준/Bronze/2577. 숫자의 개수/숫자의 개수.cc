#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b, c;
    int result[10] = { 0, };
    
    cin >> a >> b >> c;

    string str1 = to_string(a*b*c);

    for (int i=0; i<str1.length(); i++) {
        int num = (int)(str1[i] - '0');
        // cout << num << "\n";
        result[num]++;
    }

    // cout << str1;
    for (int k=0; k<10; k++) {
        cout << result[k] << "\n";
    }

    return 0;
}