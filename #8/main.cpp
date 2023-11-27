#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    int max = 0;
    ifstream file("#8.txt", ios::in);
    if (file)
    {
        string read, reader;
        while(getline(file, reader))
        {
            read += reader;
        }
        for (int i = 0; i <= 1000 - 5; i++)
        {
            if (max < atoi(read.substr(i, 1).c_str()) * atoi(read.substr(i + 1, 1).c_str()) * atoi(read.substr(i + 2, 1).c_str()) * atoi(read.substr(i + 3, 1).c_str()) * atoi(read.substr(i + 4, 1).c_str()))
            {
                max = atoi(read.substr(i, 1).c_str()) * atoi(read.substr(i + 1, 1).c_str()) * atoi(read.substr(i + 2, 1).c_str()) * atoi(read.substr(i + 3, 1).c_str()) * atoi(read.substr(i + 4, 1).c_str());
            }
        }
        file.close();
    }
    else
    {
        cerr << "Impossible d'ouvrir le fichier !" << endl;
    }
    cout << max << endl;
    return 0;
}
