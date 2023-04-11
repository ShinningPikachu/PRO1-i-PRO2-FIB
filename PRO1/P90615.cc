#include <iostream>
using namespace std;
int main () {
    
    int x, y, z, mid;
    cin>> x >> y >> z;
    if ( x>y ){
        mid = x;
    } else mid = y;
        
    if ( mid>z ){
     cout << mid << endl;  
    } else cout << z << endl;
    
}
