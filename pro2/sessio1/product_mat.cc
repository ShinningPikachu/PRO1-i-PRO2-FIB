#include <iostream>

using namespace std;

#include "matrizIOint.hh"

typedef vector<vector <int> > Matriz;

Matriz product(const Matriz& m1, const Matriz& m2){

    int y = m1.size(); 
    int times = m1[0].size();
    int x = m2[0].size();
    Matriz T(y, vector <int> (x));
    int result = 0;
    for (int i = 0; i < y; i++){
        for (int j = 0; j < x; j++){
            for (int k = 0; k < times; k++){
                result += m1[i][k]*m2[k][j];
            }
            T[i][j] = result;
            result = 0;
        }
    }
    return T;
    
}

int main(){
    Matriz T(2, vector <int> (3));
    Matriz Y(3, vector <int> (1));
    T = {
        {1, 1, 1},
        {2, 2, 2}
    };
    Y = {
        {3},{3},{3}
    };
    Matriz G(2, vector <int> (1));
    G = product(T, Y);
    escribir_matriz_int(G);
}
