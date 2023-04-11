#include <iostream>
using namespace std;
int main(){
    char x;
    cin >> x;
    if (x<=90){
        cout<<"uppercase"<<endl;
    }else cout <<"lowercase"<<endl;
    if (x=='A' or x=='E' or x=='I' or x=='O' or x=='U' or x=='a' or x=='e' or x=='i' or x=='o' or x=='u'){
        cout<<"vowel"<<endl;
    }else cout<<"consonant"<<endl;
}
