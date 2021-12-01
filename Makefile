SRC=Nodo.cpp\
	Arbol.cpp\

OBJ=Nodo.o\
	Arbol.o

all:
	g++ -c ${SRC}
	g++ ${OBJ} main.cpp -o arbol.exe
