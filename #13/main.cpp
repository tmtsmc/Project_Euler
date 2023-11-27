#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <fstream>

using namespace std;

int main()
{
    double sum = 0;
    int a = 0;
    string read;
    stringstream out;
    ifstream file("#13.txt");
    if (file)
    {
        while (getline(file, read))
        {
            sum += atof(read.c_str());
        }
    }
    else
    {
        cerr << "impossible d'ouvrir le fichier" << endl;
    }
    out << fixed << sum;
    read = out.str();
    cout << read.substr(0, 10) << endl;
    return 0;
}
