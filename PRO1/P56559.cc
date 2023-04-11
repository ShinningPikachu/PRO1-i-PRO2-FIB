#include <iostream>
using namespace std;
int main(){
    int x,y,z,w;
    cin>>x>>y>>z>>w;
    if (x<z and y>w){
        cout<<"2"<<endl;
    }else if (z<x and w>y){
        cout<<"1"<<endl;
    }else if (z==x and w==y){
        cout<<"="<<endl;
    }else if (x==y){
        cout<<"1"<<endl;
    }else if (z==w){
        cout<<"2"<<endl;
    }else if (x==z){
        if (y<w){
           cout<<"1"<<endl; 
        }else cout<<"2"<<endl;
    }else if (y==w){
        if (x<z){
            cout<<"2"<<endl;
        }else cout<<"1"<<endl;
    }
    else cout<<"?"<<endl;
}    
