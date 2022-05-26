#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> a, b;
    int a_num, b_num;
    int i = 0;

    while (true) {
        cin >> a_num >> b_num;  
        a.__emplace_back(a_num);
        b.__emplace_back(b_num);
        if(a_num == 0 && b_num == 0) {
            break;
        }
        i++;
    }

    for(int k=0; k<i; k++) {
        cout << a[k] + b[k] << "\n";
    }

    return 0;
}