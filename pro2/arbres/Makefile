OPCIONS = -D_JUDGE_ -D_GLIBCXX_DEBUG -O2 -Wall -Wextra -Wno-sign-compare -std=c++11
#
mida_arbre.exe: mida_arbre.o BinTreeIOint.o
	g++ -o mida_arbre.exe mida_arbre.o BinTreeIOint.o
#
mida_arbre.o: mida_arbre.cc BinTreeIOint.hh
	g++ -c mida_arbre.cc -I$(INCLUSIONS) $(OPCIONS) 
#
BinTreeIOint.o: BinTreeIOint.cc BinTreeIOint.hh
	g++ -c BinTreeIOint.cc -I$(INCLUSIONS) $(OPCIONS) 
#
tar: mida_arbre.cc BinTreeIOint.cc BinTreeIOint.hh
	tar cvf sol.tar mida_arbre.cc BinTreeIOint.cc BinTreeIOint.hh
#
clean:
	rm -f *.o
	rm -f *.exe
