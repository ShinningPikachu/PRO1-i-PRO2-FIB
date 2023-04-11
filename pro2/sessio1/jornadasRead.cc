#include <iostream>
#include <vector>

using namespace std;

struct pairs {
    int one = -1, two = -1;
};

typedef vector<vector<pairs>> Matrix;


int main() {
    int teams = 0, tempo = 0;
    cin >> teams >> tempo;
    int positionY, positionX;
    Matrix T(teams, vector<pairs>(teams));
    for (int i = 0; i < tempo; i++) {
        for (int j = 0; j < teams / 2; j++) {
            cin >> positionY >> positionX;
            cin >> T[positionY - 1][positionX - 1].one >> T[positionY - 1][positionX - 1].two;
        }
    }
    cout << teams << endl;
    for (int i = 0; i < teams; i++) {
        for (int j = 0; j < teams; j++) {
            cout << T[i][j].one << " " << T[i][j].two << "  ";
        }
        cout << endl;
    }
}
