#include "Nodo.h"

Nodo::Nodo(std::string nombre) : _nombre(nombre), _primerHijo(nullptr), _ultimoHijo(nullptr), _siguiente(nullptr), _profundidad(0)
{
}

void Nodo::AgregarHijo(Nodo *hijo)
{
    hijo->SetProfundidad(_profundidad + 1);
    if (_primerHijo == nullptr) // Si la lista está vacía
    {
        _primerHijo = hijo;
        _ultimoHijo = hijo;
    }
    else // Si la lista NO está vacía
    {
        _ultimoHijo->_siguiente = hijo;
        _ultimoHijo = hijo;
    }
}
