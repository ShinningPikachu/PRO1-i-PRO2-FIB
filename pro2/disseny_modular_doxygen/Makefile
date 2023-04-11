# MAKEFILE: emplearemos esta utilidad para preparar ejecutables en los que 
# intervienen varias clases, de forma que con una unica instruccion 
# se compilan o linkan los ficheros estrictamente necesarios.
#
# Si en el directorio solo hay un proyecto y un makefile, para ejecutar este
# simplemente se escribe "make"
#
# Nuestros makefile se componen de una creación de variables seguida de
# una serie de instrucciones con la estructura:
#
#           fichero1":" lista de ficheros 
#           "tabulador" instrucción de compilación o linkado	
#
#           fichero2":" lista de ficheros 
#           "tabulador" instrucción de compilación o linkado	
#        
#           etc
#
# Esto significa: para obtener el fichero1 es necesario que existan todos
# los ficheros de su lista; si no existe o es más antiguo que alguno de
# ellos, se obtiene o actualiza con su instruccion; si no existe alguno de
# los ficheros de la lista, el proceso acaba con error; lo mismo para el
# fichero2, etc
# 
# Mediante este esquema, cada uno de nuestros makefile ha de contener todas
# las instrucciones que sean necesarias para obtener los .o y .exe del
# proyecto correspondiente.
#
# Ejemplos:
#
# La siguiente instruccion define una variable de entorno local, para compilar
# con las opciones habituales: 
#
OPCIONS = -D_JUDGE_ -D_GLIBCXX_DEBUG -O2 -Wall -Wextra -Werror -Wno-sign-compare -std=c++11
#
# Si no teneis definidas las variables INCLUSIONS y OBJECTES, se pueden definir aqui:
INCLUSIONS = /assig/pro2/inclusions
OBJECTES = /assig/pro2/objectes
#
# La siguiente instruccion significa:
# para obtener pro2_especif.exe es necesario que exista pro2_especif.o;
# si pro2_especif.exe no existe o es mas antiguo que pro2_especif.o,
# se obtiene con el g++ -o ... (el tabulador antes de g++ es necesario)
#
pro2_especif.exe: pro2_especif.o 
	g++ -o pro2_especif.exe pro2_especif.o $(OBJECTES)/{Cubeta.o,Prenda.o,Lavadora.o}
#
# La siguiente instruccion significa:
# para obtener pro2_especif.o es necesario que exista pro2_especif.cc;
# si pro2_especif.o no existe o es mas antiguo que pro2_especif.cc,
# se obtiene con el g++ -c ... 
#
pro2_especif.o: pro2_especif.cc
	g++ -c pro2_especif.cc $(OPCIONS) -I$(INCLUSIONS)
#
# Realizad las modificaciones necesarias para gestionar las clases de la
# sesión cuando os toque implementarlas a vosotros.
#
# Esta última opción sirve para limpiar el directorio de ficheros 
# innecesarios; se ejecuta mediante el comando "make clean"
#
clean:
	rm -f *.o
	rm -f *.exe
