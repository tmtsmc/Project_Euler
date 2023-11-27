#include <iostream>
#include <sstream>

using namespace std;

bool isPalindromic(int i)
{
    string s;
    stringstream out;
    out << i;
    s = out.str();
    for(int j = 0; j <= s.size() / 2; j++)
    {
        if(s.substr(j, 1) != s.substr(s.size() - 1 - j, 1))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int palindromic = 0;
    for(int a = 999; a >= 100; a--)
    {
        for(int b = 999; b >= a; b--)
        {
            if(isPalindromic(a * b) && a * b >= palindromic)
            {
                palindromic = a * b;
            }
        }
    }
    cout << palindromic;
    return 0;
}
