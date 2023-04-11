#include "BinTreeIOint.hh"


bool find(const BinTree<int>& a,int n)
/* Pre: cert */
/* Post: El resultat indica si x es a l'arbre a */
{
  bool b;
  if (a.empty()) b=false;
  else if (a.value()==n) b=true;
  else {
    b=find(a.left(),n);
    if (not b) b=find(a.right(),n);
  }
  return b;
}

int main(){

  BinTree<int> a;
  read_bintree_int(a,0);
  cout << "Escrivim a" << endl;
  write_bintree_int(a);
  cout << endl;
  cout << "Numero a cercar: ";
  int n;
  cin >> n;
  bool es = find(a,n);
  if (es) cout << "Hi es" << endl;
  else cout << "No hi es" << endl;
  cout << "Escrivim a per veure que no s'ha destruit durant l'operacio" << endl;
  write_bintree_int(a);
  cout << endl;
}
