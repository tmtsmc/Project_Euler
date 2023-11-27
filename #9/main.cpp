#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int triplet = 1000;
    int a = 1;
    int b = 2;
    int c = triplet - (a + b);
    bool boo = true;
    while (boo)
    {
        if (a * a + b * b == c * c)
        {
            boo = false;
        }
        else
        {
            if (b >= c)
            {
                a++;
                b = a + 1;
                c = triplet - (a + b);
            }
            else
            {
                b++;
                c--;
            }
        }
    }
    cout << a * b * c << endl;
    return 0;
}
