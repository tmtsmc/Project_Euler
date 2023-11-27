#include <iostream>

using namespace std;

int main()
{
    int x = 2520;
    int i = 2;
    bool boo = true;
    while (boo)
    {
        if (x%i == 0)
        {
            if (i >= 20)
            {
                boo = false;
            }
            else
            {
                i++;
            }
        }
        else
        {
            i = 2;
            x+= 20;
        }
    }
    cout << x << endl;
    return 0;
}
