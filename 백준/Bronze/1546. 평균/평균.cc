#include <iostream>

using namespace std;

int main() {
    int n;
    double sum = 0;
    double avg = 0;
    int max = -1;

    cin >> n;

    double score[n];

    for (int i = 0; i < n; i++) {
        cin >> score[i];
        if (score[i] > max) {
            max = score[i];
        }
    }

    for (int i = 0; i < n; i++) {
        sum += score[i] / max * 100;
    }

    avg = sum / (float)n;

    cout << avg;

    return 0;
}