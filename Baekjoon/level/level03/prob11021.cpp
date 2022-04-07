#include <iostream>
#include <vector>

using namespace std;

int main() {
    int size, a, b;
    cin >> size;
    vector<int> a_vector, b_vector;
    for (int i=0; i<size; i++) {
        cin >> a >> b;
        a_vector.push_back(a);
        b_vector.push_back(b);
    }

    for (int i=0; i<size; i++) {
        cout << "Case #" << i+1 << ": " << a_vector[i] + b_vector[i] << "\n";
    }

    return 0;
}