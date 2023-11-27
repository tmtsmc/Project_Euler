#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers(1000);
    numbers[1] = 3;
    numbers[2] = 3;
    numbers[3] = 5;
    numbers[4] = 4;
    numbers[5] = 4;
    numbers[6] = 3;
    numbers[7] = 5;
    numbers[8] = 5;
    numbers[9] = 4;
    numbers[10] = 3;
    numbers[11] = 6;
    numbers[12] = 6;
    numbers[13] = 8;
    numbers[14] = 8;
    numbers[15] = 7;
    numbers[16] = 7;
    numbers[17] = 9;
    numbers[18] = 8;
    numbers[19] = 8;
    numbers[20] = 6;
    numbers[30] = 6;
    numbers[40] = 5;
    numbers[50] = 5;
    numbers[60] = 5;
    numbers[70] = 7;
    numbers[80] = 6;
    numbers[90] = 6;
    for (int i = 100; i <= 900; i += 100) {
        numbers[i] = 7 + numbers[i/100];
    }
    numbers[1000] = 8 + numbers[1];
    int sum = 0;
    int nb = 20;
    for (int i = nb + 1; i < 100; i++) {
        if (i % 10 == 0) {
            nb = i;
        }
        numbers[i] = numbers[nb] + numbers[i - nb];
    }
    nb = 100;
    for (int i = nb + 1; i < 1000; i++) {
        if (i % 100 != 0) {
            numbers[i] = numbers[nb] + 3 + numbers[i - nb];
        } else {
            nb = i;
        }
    }
    for (int i = 1; i <= 1000; i++) {
        sum += numbers[i];
    }
    cout << sum << endl;
    //cout << numbers[115] << endl;
    return 0;
}
