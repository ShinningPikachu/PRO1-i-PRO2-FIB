#include <iostream>
using namespace std;
int main () {
    int x,y,z,q,w,e;
    cin>>x>>y>>z;
    if (z==59){
        if (y==59){
            if(x==23){
               x=0;
               z=0;
               y=0;
            }else {
            x=x+1;
            z=00;
            y=00;
            }
        }else {
            y=y+1;
            z=00;
        }
    } else z=z+1;
    if (x/10.0<1) {
        q=0;
        cout<<q<<x<<":";
    }else cout<<x<<":";
    if (y/10.0<1) {
        w=0;
        cout<<w<<y<<":";
    } else cout<<y<<":"; 
    if (z/10.0<1) {
        e=0;
        cout<<e<<z<<endl;
    }else cout<<z<<endl;
}
