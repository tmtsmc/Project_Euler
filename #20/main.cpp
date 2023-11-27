#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> big;
    big.push_back(1);
    for (int i = 2; i <= 100; i++) {
        for (int j = 0; j < big.size(); j++) {
            big[j] *= i;
        }
        for (int j = 0; j < big.size(); j++) {
            if (big[j] >= 10) {
                if (j == big.size() - 1) {
                    big.push_back((int) (big[j] / 10));
                } else {
                    big[j + 1] += (int) (big[j] / 10);
                }
                big[j] -= (int) (big[j] / 10) * 10;
            }
        }
    }
    for (int i = big.size() - 1; i >= 0; i--) {
        cout << big[i];
        if (i != big.size() - 1) big[big.size() - 1] += big[i];
    }
    cout << endl << endl << big[big.size() - 1] << endl;
    return 0;
}
