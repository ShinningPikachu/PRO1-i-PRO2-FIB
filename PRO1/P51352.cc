#include <iostream>
using namespace std;
int main () {
    char X, Y;
    cin >> X >> Y;
    if ( X == Y) {
        cout<<"-"<<endl;
    } else if (( X == 'A' and Y == 'P' ) or ( X == 'P' and Y == 'V' ) or ( X == 'V' and Y == 'A')) {
    cout << "1" << endl;
    } else cout << "2" << endl;
}
