#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int rows = 100;
    int columns = 100;
    int triangle[100][100];
    int x = 0;
    int y = 0;
    ifstream fichier("triangle.txt", ios::in);
    if (fichier) {
        while (x < 100) {
            fichier >> triangle[y][x];
            if (x != y) {
                x++;
            } else {
                y++;
                x = 0;
            }
        }
        fichier.close();
    } else cerr << "Impossible d'ouvrir le fichier !" << endl;
    for (int i = rows - 2; i >= 0; i--) {
        for (int j = 0; j < columns; j++) {
            triangle[i][j] = (triangle[i + 1][j] < triangle[i + 1][j + 1]) ? triangle[i][j] + triangle[i + 1][j + 1] : triangle[i][j] + triangle[i + 1][j];
        }
    }
    cout << triangle[0][0] << endl;
    return 0;
}
