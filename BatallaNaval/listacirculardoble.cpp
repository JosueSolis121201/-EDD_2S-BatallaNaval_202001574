
#include "listacirculardoble.h"
#include "nodo.h"

ListaCircularDoble::ListaCircularDoble(){

}

void ListaCircularDoble::insertarNodo(){
    nodo* nuevo = new nodo();
    cout << "Ingrese el dato que contendra el nuevo Nodo: ";
    cin >> nuevo->dato;

    if(this->primero==NULL){
        this->primero = nuevo;
        this->ultimo = nuevo;
        this->primero->siguiente = this->primero;
        primero->atras = ultimo;
    }else{
        ultimo->siguiente = nuevo;
        nuevo->atras = ultimo;
        nuevo->siguiente = primero;
        ultimo = nuevo;
        primero->atras = ultimo;
    }
    cout << "\n Nodo Ingresado\n\n";

}

void ListaCircularDoble:: desplegarListaPU(){
    nodo* actual = new nodo();
    actual = primero;
    if(primero!=NULL){
        do{
            cout << "\n " << actual->dato;
            actual = actual->siguiente;
        }while(actual!=primero);

    }else{
        cout << "\n La lista se Encuentra Vacia\n\n";
    }
}

void ListaCircularDoble::desplegarListaUP(){
    nodo* actual = new nodo();
    actual = ultimo;
    if(primero!=NULL){
        do{
            cout << "\n " << actual->dato;
            actual = actual->atras;
        }while(actual!=ultimo);

    }else{
        cout << "\n La lista se Encuentra Vacia\n\n";
    }
}
