#include <iostream>
using namespace std;
int main(){
    char x,y;
    cin>>x;
    if (x<=90){
        y=x-'A'+'a';
    }else y=x-'a'+'A';
    cout<<y<<endl;
}
