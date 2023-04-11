#include <iostream>
using namespace std;
int main() {
    string x,y;
    cin>>x>>y;
    if (x>y){
        cout<<"1 big"<<endl;
    }else if (x<y){
        cout<<"2 big"<<endl;
    }else if (x==y){
        cout<<"igual"<<endl;
    }
}
