#include <iostream>
#include <set>
#include "BinTreeIOint.hh"

using namespace std;

// en este ejemplo suponemos que los arboles que vamos a insertar en
// el set no son vacios y sus raices son diferentes entre si; si no,
// el orden que definimos no es valido

void escribir (const set<BinTree<int>> & c){
  set<BinTree<int>>::const_iterator it = c.begin();
  for(; it != c.end(); ++it ){
    write_bintree_int(*it);
    cout << endl;
  }
  cout << endl;
}

void leer (set<BinTree<int>>& c){
  int num_elem_set; cin >> num_elem_set;
  for (int i=0; i<num_elem_set; ++i) {
    BinTree<int> a;
    read_bintree_int(a,0);
    c.insert(a);
  }
}

// definimos el siguiente orden: a1 es menor que a2 si la raiz de a1
// es menor que la de a2

bool operator<(const BinTree<int>& a1, const BinTree<int>& a2){
  return a1.value()<a2.value();
} 

// comprobamos que independientemente del orden en que leamos los
// elementos, al escribir desde begin, salen en el orden que hemos
// definido

int main (){
  set<BinTree<int>> c;
  cout << "hay que escribir el numero de arboles y luego para cada arbol sus elementos en preorden con marca 0" << endl;
  leer(c); cout << c.size() << endl;
  escribir(c);
}
