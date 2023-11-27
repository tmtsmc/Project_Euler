#include <iostream>
#include <stdlib.h>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
    vector<vector<int> > array;
    string read;
    int max = 0;
    int i = 0;
    ifstream file("#11.txt", ios::in);
    if (file)
    {
        while (getline(file, read))
        {
            array.push_back(vector<int>());
            for (int j = 0; j < 20; j++)
            {
               array[i].push_back(atoi(read.substr(j * 3, 2).c_str()));
            }
            i++;
            for (int i = 0; i <= read.size() - 3 * 4 - 1; i += 3)
            {
                if (max < atoi(read.substr(i, 2).c_str()) * atoi(read.substr(i + 3, 2).c_str()) * atoi(read.substr(i + 6, 2).c_str()) * atoi(read.substr(i + 9, 2).c_str()))
                {
                    max = atoi(read.substr(i, 2).c_str()) * atoi(read.substr(i + 3, 2).c_str()) * atoi(read.substr(i + 6, 2).c_str()) * atoi(read.substr(i + 9, 2).c_str());
                }
            }
        }
        file.close();
        for (int y = 0; y < array.size(); y++)
        {
            for (int x = 0; x < array[y].size(); x++)
            {
                if (y <= array.size() - 4)
                {
                    if (max < array[y][x] * array[y + 1][x] * array[y + 2][x] * array[y + 3][x])
                    {
                        max = array[y][x] * array[y + 1][x] * array[y + 2][x] * array[y + 3][x];
                    }
                }
                if (x <= array.size() - 4 && y <= array.size() - 4)
                {
                    if (max < array[y][x] * array[y + 1][x + 1] * array[y + 2][x + 2] * array[y + 3][x + 3])
                    {
                        max = array[y][x] * array[y + 1][x + 1] * array[y + 2][x + 2] * array[y + 3][x + 3];
                    }
                }
                if (x >= 3 && y <= array.size() - 4)
                {
                    if (max < array[y][x] * array[y + 1][x - 1] * array[y + 2][x - 2] * array[y + 3][x - 3])
                    {
                        max = array[y][x] * array[y + 1][x - 1] * array[y + 2][x - 2] * array[y + 3][x - 3];
                    }
                }
            }
        }
    }
    else
    {
        cerr << "Impossible d'ouvrir le fichier !" << endl;
    }
    cout << max << endl;
    return 0;
}
