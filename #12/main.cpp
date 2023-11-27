#include <iostream>

using namespace std;

int main()
{
    unsigned long int triangle = 0;
    unsigned long int step = 1;
    unsigned int nbDivisor = 0;
    while (nbDivisor < 500)
    {
        triangle += step;
        step++;
        nbDivisor = 0;
        for (int i = 1; i <= triangle / i; i++)
        {
            if (triangle % i == 0)
            {
                nbDivisor += 2;
            }
        }
    }
    cout << triangle << endl;
    return 0;
}
