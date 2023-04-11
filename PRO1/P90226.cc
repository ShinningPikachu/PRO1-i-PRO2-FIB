#include <iostream>
using namespace std;
int main () {

    string y,w;

    cin>>y>>w;
    if (y<w){
        cout<<y<<" < "<<w<<endl;
    }else if (y>w){
        cout<<y<<" > "<<w<<endl;
    }else if (y==w) {
        cout<<y<<" = "<<w<<endl;
    }
}
