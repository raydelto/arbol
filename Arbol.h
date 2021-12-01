#pragma once

#include "Nodo.h"

class Arbol
{
public:
    Arbol(Nodo* raiz);
    void Recorrer();
    void Recorrer(Nodo* nodo);
private:
    Nodo* _raiz;
};
