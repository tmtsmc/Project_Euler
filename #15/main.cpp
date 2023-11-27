#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int A = 20;
    int x = A;
    int y = 0;
    int B = 20;
    bool loop = true;
    if (B > A)
    {
        A = B;
        B = x;
        x = A;
    }
    int i = A + 1;
    vector<long long int> table(i, 1);
    i--;
    while (loop)
    {
        i++;
        if (x == A)
        {
            y++;
            x = y;
            table.push_back(2 * table[i - (A + 1 - x)]);
        }
        else
        {
            table.push_back(table[i - (A + 1 - y)] + table[i - 1]);
            x++;
        }
        if (x == A && y == B)
        {
            loop = false;
        }
    }
    cout << table[i] << endl;
    return 0;
}
