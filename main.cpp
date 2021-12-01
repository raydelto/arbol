#include "Arbol.h"

int main()
{
    Nodo* presidente = new Nodo("Presidente");
    Nodo* vp1 = new Nodo("vp1");
    Nodo* vp2 = new Nodo("vp2");
    Nodo* director1 = new Nodo("Director 1");
    Nodo* director2 = new Nodo("Director 2");
    Nodo* gerente1 = new Nodo("Gerente 1");
    Nodo* gerente2 = new Nodo("Gerente 2");
    Nodo* gerente3 = new Nodo("Gerente 3");
    Nodo* supervisor1 = new Nodo("Supervisor 1");
    Nodo* supervisor2 = new Nodo("Supervisor 2");
    Nodo* operario1 = new Nodo("Operario 1");
    Nodo* operario2 = new Nodo("Operario 2");
    Nodo* operario3 = new Nodo("Operario 3");   

    presidente->AgregarHijo(vp1);
    presidente->AgregarHijo(vp2);

    vp1->AgregarHijo(director1);
    vp1->AgregarHijo(director2);

    director1->AgregarHijo(gerente1);

    director2->AgregarHijo(gerente2);
    director2->AgregarHijo(gerente3);

    gerente1->AgregarHijo(supervisor1);
    
    gerente3->AgregarHijo(supervisor2);

    supervisor1->AgregarHijo(operario1);
    supervisor1->AgregarHijo(operario2);

    supervisor2->AgregarHijo(operario3);

    Arbol* arbol = new Arbol(presidente);
    arbol->Recorrer();

    return 0;
}
