/** @file Organismo.cc
    @brief Código de la clase Organismo 
*/

#include "Organismo.hh"

// Sobre la notación de los comentarios:
// - hi(a): hijo izquierdo del arbol a
// - hd(a): hijo derecho del arbol a  

Organismo::Organismo() 
{
  id=0;
  maligno=false;
  victimas=0;
}

void Organismo::incrementar_victimas() 
{
  ++victimas;
}

void Organismo::anadir_id(int id) 
{
  this->id = id;
}

int Organismo::lucha_organismos(const Organismo& o2) const 
{
  // Ésta es la operación más importante del módulo. Dados dos organismos, hay
  // que decidir primero si van a luchar de verdad o no, es decir, si sus
  // estructuras celulares son simétricas o no. Por eso, introducimos la
  // operación auxiliar "simetricos" en la parte privada.  Notad que en la
  // cabecera de la operación "simetricos" decimos que los parámetros han de
  // ser árboles de Celula, pero la operación es independiente del tipo de los
  // elementos del árbol, ya que éstos nunca se llegan a consultar.  Asímismo,
  // debemos disponer de otra operación que aplique las luchas de las células
  // de dos árboles, sabiendo que son simétricos. Aquí sí es relevante el
  // hecho de que los árboles sean de células. Esta nueva operación privada se
  // llama "lucha_arboles".

  int n;
  if (simetricos(celulas, o2.celulas)) {      
    pair<int, int> m = lucha_arboles(celulas, o2.celulas);
    if (m.first == m.second) n = 0;
    else if (m.first < m.second) n = 1;
    else n = 2; // m.first > m.second
  }
  else n = 3;
  return n;
}

bool Organismo::simetricos(const BinTree<Celula>& a1, const BinTree<Celula>& a2)
{
  bool b;
  if (a1.empty() or a2.empty()) b = a1.empty() and a2.empty();
  else {
    b=simetricos(a1.left(),a2.right());
    // HI1: b indica si hi(A1) y hd(A2) son simétricos
    if (b) { b=simetricos(a2.left(),a1.right());
             // HI2: b indica si hd(A1) y hi(A2) son simétricos
    }
  }
  return b;
}

pair<int,int> Organismo::lucha_arboles(const BinTree<Celula>& a1, const BinTree<Celula>& a2)
{
  pair<int,int> n;

  if (a1.empty()) {
    n.first = 0; 
    n.second = 0;
  }
  else {
    int nraiz = a1.value().lucha_celulas(a2.value());
    n.first = 0; 
    if (nraiz == 1) ++n.first;
    n.second = 0;
    if (nraiz == 2) ++n.second;
    pair<int,int> na = lucha_arboles(a1.left(),a2.right());//fe1, fd2);
    //       HI1: na.first = número de células de hi(A1) que vencen a su 
    //                       correspondiente en hd(A2);
    //            na.second = número de células de hd(A2) que vencen a su 
    //                        correspondiente en hi(A1)
    pair<int,int> nb = lucha_arboles(a2.left(),a1.right());//fd1, fe2);
    //       HI2: nb.first = número de células de hd(A1) que vencen a su 
    //                       correspondiente en hi(A2);
    //            nb.second = número de células de hi(A2) que vencen a su 
    //                        correspondiente en hd(A1)
    n.first += na.first + nb.first;
    n.second += nb.second + na.second;
  }
  return n;
}

bool Organismo::es_maligno() const 
{
  // Devuelve el valor del campo "maligno" del organismo correspondiente.
  return maligno;
}

int Organismo::num_victimas() const 
{
  // Devuelve el valor del campo "victimas" del organismo correspondiente.
  return victimas;
}

void Organismo::leer(int N) 
{
  // Esta operación simplemente lee la estructura celular del organismo e
  // inicializa el recuento de víctimas. Un árbol de células se lee igual que
  // un árbol de enteros. Suponemos que contamos con una marca de tipo Celula
  // para indicar que llegamos a un árbol vacío.

  if (N<=0) throw PRO2Excepcio("Las celulas del organismo han de tener N parametros (N>0)");

  leer_arbol_celulas(N, celulas);
  maligno = readbool();
  victimas = 0;
}

void Organismo::leer_arbol_celulas(int N, BinTree<Celula>& a) 
{
  BinTree<Celula> a1, a2;
  Celula c;
  c.leer(N);
  if (not c.es_vacia()) {
    leer_arbol_celulas(N, a1);
    leer_arbol_celulas(N, a2);
    a=BinTree<Celula>(c, a1, a2);
  }
}

void Organismo::escribir(bool estr) const
{
  // Escribimos los campos del organismo.  Un árbol de células se escribe
  // igual que un árbol de enteros, suponiendo que (como es el caso) exista
  // una operación para escribir células.
  cout << id << " " << victimas;
  if (estr) {
    escribir_arbol_celulas_id(celulas);
  }
  cout << endl;
}

void Organismo::escribir_arbol_celulas_id(const BinTree<Celula>& a)
{
  if (not a.empty()) {
    //Celula aux = a.value();
    escribir_arbol_celulas_id(a.left());
    cout << " ";
    a.value().escribir();
    escribir_arbol_celulas_id(a.right());
  }
}

