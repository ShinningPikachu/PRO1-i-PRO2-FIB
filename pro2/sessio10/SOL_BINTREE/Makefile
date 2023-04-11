OPCIONS = -D_JUDGE_ -D_GLIBCXX_DEBUG -O2 -Wall -Wextra -Werror -Wno-sign-compare -std=c++11

pro2.exe: pro2.o Sistema.o Organismo.o Celula.o
	g++ -o pro2.exe *.o 

Sistema.o: Sistema.cc Sistema.hh Organismo.hh
	g++ -c Sistema.cc $(OPCIONS) 

Organismo.o: Organismo.cc Organismo.hh Celula.hh BinTree.hh
	g++ -c Organismo.cc $(OPCIONS) 

Celula.o: Celula.cc Celula.hh
	g++ -c Celula.cc $(OPCIONS) 

pro2.o: pro2.cc Sistema.hh Organismo.hh
	g++ -c pro2.cc $(OPCIONS) 

clean:
	rm -f *.o
	rm -f *.exe
