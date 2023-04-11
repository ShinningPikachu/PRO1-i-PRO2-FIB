#include <iostream>
using namespace std;
int main () {
    int t,mid;
    cin>>t;
    mid=t/60;
    cout<<mid/60<<" "<<mid%60<<" "<<t%60<<endl;
}
