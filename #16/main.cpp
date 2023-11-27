#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nbs;
    nbs.push_back(2);
    bool boo = false;
    int size = nbs.size();
    int sum = 0;
    for (int j = 1; j < 1000; j++) {
        for (int i = 0; i < size; i++) {
            size = nbs.size();
            nbs[i] *= 2;
            if (boo) {
                nbs[i] += 1;
                boo = false;
            }
            if (nbs[i] >= 10) {
                nbs[i] -= 10;
                if (i == size - 1) {
                    nbs.push_back(1);
                } else {
                    boo = true;
                }
            }
        }
    }
    for (int i = nbs.size() - 1; i >= 0; i--) {
        sum += nbs[i];
    }
    cout << sum << endl;
    return 0;
}
