#include <iostream>
using namespace std;
int main(){
 int Temp;
 cin>>Temp;
 if (Temp>30){
     cout<<"it's hot"<<endl;
     if(Temp>=100) cout<<"water would boil"<<endl;
}else if (Temp<10){
    cout<<"it's cold"<<endl;
    if(Temp<=0) cout<<"water would freeze"<<endl;
}else cout<<"it's ok"<<endl;
}
