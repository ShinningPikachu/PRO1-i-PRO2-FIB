OPCIONS = -D_JUDGE_ -D_GLIBCXX_DEBUG -O2 -Wall -Wextra  -Wno-sign-compare -std=c++11

actualizar_conj_est.exe: actualizar_conj_est.o Estudiant.o
	g++ -o actualizar_conj_est.exe actualizar_conj_est.o Estudiant.o

Estudiant.o:  Estudiant.cc Estudiant.hh 
	g++ -c Estudiant.cc $(OPCIONS)

actualizar_conj_est.o: actualizar_conj_est.cc
	g++ -c actualizar_conj_est.cc $(OPCIONS)

clean:
	rm -f *.o
	rm -f *.exe
