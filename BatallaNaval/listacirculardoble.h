#ifndef LISTACIRCULARDOBLE_H
#define LISTACIRCULARDOBLE_H


#include <iostream>
#include "nodo.h"
using namespace std;
class ListaCircularDoble
{
private:
    nodo* primero;
    nodo* ultimo;

public:
    ListaCircularDoble();
    void insertarNodo();
    void desplegarListaPU();
    void desplegarListaUP();
};

#endif // LISTACIRCULARDOBLE_H
