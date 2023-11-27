#include <iostream>

using namespace std;

int main() {
    int month[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum = 0;
    int start = 6;
    for (int year = 1901; year <= 2000; year++) {
        month[1] = (year % 4 != 0 || year % 100 == 0 && year % 400 != 0) ? 28 : 29;
        for (int i = 0; i <= 11; i++) {
            if (start == 1) sum++;
            while (start <= month[i]) start += 7;
            start -= month[i];
        }
    }
    cout << sum << endl;
    return 0;
}
