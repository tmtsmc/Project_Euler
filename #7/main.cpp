#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(unsigned int);

int main(int argc, char** argv)
{
    unsigned int i = 1;
    unsigned int limit = 10001;
    unsigned int number = 1;
    while (i != limit)
    {
        number += 2;
        if (isPrime(number))
        {
            i++;
        }
    }
    cout << number << endl;
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
