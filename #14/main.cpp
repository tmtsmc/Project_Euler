#include <iostream>

using namespace std;

int main()
{
    unsigned long long int x = 0;
    unsigned long long int n = 1000000;
    unsigned int sequence = 1;
    unsigned int max = 0;
    for (int i = n; i > 0; i--)
    {
        sequence = 1;
        n = i;
        while (n != 1)
        {
            if (n % 2 == 0)
            {
                n /= 2;
            }
            else
            {
                n = n * 3 + 1;
            }
            sequence++;
        }
        if (max < sequence)
        {
            max = sequence;
            x = i;
        }
    }
    cout << x << endl;
    return 0;
}
