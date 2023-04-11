#include <iostream>
using namespace std;
int main () {
    int x;
    cin>>x;
    if (x%4==0){
        if ((x%400 != 0) and (int(x/100.0) == x/100.0)){
            cout<<"NO"<<endl;
        }else cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
}
