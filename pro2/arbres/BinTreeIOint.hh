#ifndef BINIOINT_HPP
#define BINIOINT_HPP

#include <iostream>
#include "BinTree.hh"

// Lectura d'un arbre binari d'enters, acció.  Els elements 
// s'introdueixen en preordre: primer l'arrel, després el subarbre
// esquerre i per últim el dret. Els arbres buits es
// representen amb la marca.


/* Exemple: l'arbre 

       1
     /   \
    2     3
     \
      4

   es llegeix 1 2 0 4 0 0 3 0 0 (o amb els numeros en distintes linies) */


void read_bintree_int(BinTree<int>& a, int marca);
/* Pre: a es buit; el canal estandar d'entrada conté el recorregut en preordre
   d'un arbre binari A d'enters */  
/* Post: a = A */


// Escriptura d'un arbre binari d'enters, acció.  Els elements 
// s'escriuen en inordre: primer el subarbre 
// esquerre, després l'arrel i per últim el dret.   

/* Exemple: l'arbre 

     1
   /   \
  2     3
   \
    4

   s'escriu 2 4 1 3 */


void write_bintree_int(const BinTree<int> &a); 
/* Pre: a = A */ 
/* Post: El canal estandar de sortida conté el recorregut en inordre d'a, a =  A */ 

#endif
