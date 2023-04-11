#include <iostream>
using namespace std;
int main (){
 double x ;
 int y, q;
 cin >> x;
 int z = x;
 if (x-z > 0){
     y = z + 1;
} else y = z;
if (x-z >= 0.5){
    q = z + 1;
}else q = z;
    cout << z <<" "<< y <<" "<< q << endl;
}
