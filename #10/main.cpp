#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(unsigned int);

int main(int argc, char** argv)
{
    unsigned int limit = 2000000;
    unsigned int number = 0;
    long double sum = 0;

    while (number != limit)
    {
        if (isPrime(number))
        {
            sum += number;
        }
        number++;
    }
    cout.precision(15);
    cout << sum << endl;
    return 0;
}

bool isPrime(unsigned int number)
{
    if (number <= 1)
    {
        return false;
    }
    else if (number <= 3)
    {
        return true;
    }
    else if (number % 2 == 0 || number % 3 == 0)
    {
        return false;
    }
    else
    {
        unsigned int r = floor(sqrt(number));
        unsigned int f = 5;
        while (f <= r)
        {
            if (number % f == 0 || number % (f + 2) == 0)
            {
                return false;
            }
            f += 6;
        }
        return true;
    }
}
