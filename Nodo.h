#pragma once
#include <string>

class Nodo
{
public:
    Nodo(std::string nombre);
    Nodo *GetPrimerHijo() { return _primerHijo; }
    Nodo *GetSiguiente() { return _siguiente; }
    void AgregarHijo(Nodo *hijo);
    std::string GetNombre() { return _nombre; }
    int GetProfundidad() { return _profundidad; }
    void SetProfundidad(int profundidad) { _profundidad = profundidad; }

private:
    std::string _nombre;
    Nodo *_primerHijo;
    Nodo *_ultimoHijo;
    Nodo *_siguiente;
    int _profundidad;
};
