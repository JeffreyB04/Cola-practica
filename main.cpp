#include <iostream>
#include "Lista.h"
#include"ColaLista.cpp"
#include "Persona.h"

int main() {
    Persona *cliente;

    ColaLista<Persona> *cola = new ColaLista<Persona>;
    cola->enqueue(new Persona("111", "Jeff", "1111"));
    cout << cola->size()<<endl;
    cout << *cola->front();

    cola->dequeue();
    cout << cola->size()<<endl;
    cola->dequeue();

    return 0;
}
