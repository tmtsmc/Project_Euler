#include <iostream>

using namespace std;

bool isPrime(int n)
{
	if(n % 2 == 0)
	{
	    return false;
	}
	for(int i = 3; i * i <= n; i += 2)
	{
	    if(n % i == 0)
	    {
	        return false;
	    }
	}
	return true;
}

int main()
{
    unsigned long long int number = 600851475143;
    int max = 0;
    for(int i = 3; i * i <= number; i += 2)
    {
        if(number % i == 0)
        {
            if(isPrime(i))
            {
                max = i;
            }
        }
    }
    cout << max;
    return 0;
}
