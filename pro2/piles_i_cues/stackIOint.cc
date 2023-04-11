
#include "stackIOint.hh"

void llegir_stack_int(stack<int>& p, int marca){
  int n;                                        // ... stack<ParInt>& p ...
  cin >> n;  // int m; cin >> m;                //  ParInt par;
  while (n != marca){                           //  par.llegir();
 // ParInt par(n,m);  para pilas de ParInt      //  while (par.primer()!=0 or
 // p.push(par);                                //         par.segon()!=0) {
    p.push(n);                                  //    p.push(par);
    cin >> n;
    //   cin >> m;                              //  while (par.llegir()){
  }
}

void escriure_stack_int(stack<int> p){
  cout << "[Cim] ";
  // el paso por valor copia p correctamente ya que la clase tiene 
  // creadora copiadora
  while(not p.empty()){ 
    cout << p.top() << " ";
    p.pop(); // el que no haya salto de linea entre elementos 
  }          // solo interesa si la pila no es muy grande

  // p.top().escriure();

  cout << "[Ultim]"<<endl;
}
