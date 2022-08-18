
#pragma once
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