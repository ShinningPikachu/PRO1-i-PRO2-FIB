#include "BinTreeIOint.hh"

int size(const BinTree<int>& a)
/* Pre: cert */
/* Post: El resultat és la longitud del camí més llarg de l'arrel a una fulla 
   de l'arbre a */
{
  int x;
  if (a.empty()) x=0;
  else x=size(a.left())+size(a.right())+1;
  return x;
}


int main(){
  BinTree<int> a;
  read_bintree_int(a,0);
  cout << "Escrivim a" << endl;
  write_bintree_int(a);
  cout << endl;
  cout << "Mida: " << size(a) << endl;
  cout << "Escrivim a per veure que no s'ha destruit durant l'operacio" << endl;
  write_bintree_int(a);
  cout << endl;
}
