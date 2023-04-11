#include <iostream>
using namespace std;
int main () {
    int x,y,z,w,v,s;
    cin>>x>>y>>z>>w>>v;
    s=x*365*24*3600+y*24*3600+z*3600+w*60+v;
    cout<<s<<endl;
}
