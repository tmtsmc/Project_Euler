#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    int b = 1;
    int x = 0;
    int y = 0;
    bool boo = true;
    while (boo)
    {
        x += a * a;
        y += a;
        if (a < 100)
        {
            a++;
        }
        else
        {
            y = y * y;
            boo = false;
        }
    }
    cout << y - x << endl;
    return 0;
}
