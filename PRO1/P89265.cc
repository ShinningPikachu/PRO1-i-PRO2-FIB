#include <iostream>
using namespace std;
int main(){
    int x,y,z,w;
    cin>>x>>y>>z>>w;
    if (x<z and y>w){
        cout<<"["<<z<<","<<w<<"]"<<endl;
    } else if (z<x and w>y){
        cout<<"["<<x<<","<<y<<"]"<<endl;
    } else if (x<z and w>y){
        if (z<=y){
        cout<<"["<<z<<","<<y<<"]"<<endl;
        } else cout <<"[]"<<endl;
    } else if (z<x and y>w){
        if (x<=w){
            cout<<"["<<x<<","<<w<<"]"<<endl;
        } else cout<<"[]"<<endl;
        
    }else if (z==x and y==w){
        cout<<"["<<z<<","<<y<<"]"<<endl;
    }else if (y==z) {
        cout<<"["<<z<<","<<y<<"]"<<endl;
    }else if (z==x and w<y){
        cout<<"["<<z<<","<<w<<"]"<<endl;
    }else if (z==x and w>y){
        cout<<"["<<z<<","<<y<<"]"<<endl;
    }else if (w==y and z<x){
        cout<<"["<<x<<","<<y<<"]"<<endl;
    }else if (w==y and x<z){
        cout<<"["<<z<<","<<y<<"]"<<endl;
    } 
    
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
