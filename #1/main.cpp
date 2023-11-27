#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    for(int number = 3; number < 1000; number++)
    {
        if(number % 3 == 0 || number % 5 == 0)
        {
            sum += number;
        }
    }
    cout << sum;
    return 0;
}
