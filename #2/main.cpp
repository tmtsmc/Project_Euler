#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int a = 1;
    int b = 2;
    int c = 0;
    for(int a = 1; a < 4000000; a += 0) {
        if(a % 2 == 0) {
            sum += a;
        }
        c = a;
        a = b;
        b += c;
    }
    cout << sum << endl; //sum = 4613732
    return 0;
}
