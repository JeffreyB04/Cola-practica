//
// Created by jeffr on 26/8/2022.
//

#include "ColaLista.h"

template<class T>
int ColaLista<T>::size() {
    return n;
}

template<class T>
ColaLista<T>::ColaLista() {
    this->S = new Lista<T>;
    n = 0;
}

template<class T>
bool ColaLista<T>::empty() const {
    return n == 0;
}

template<class T>
void ColaLista<T>::enqueue(T *o) {
    ++n;
    S->agregarInicio(o);
}

template<class T>
T *ColaLista<T>::front() /*throw(StackEmpty)*/ {
    if (empty())
        cout<<"vacio";
        //throw StackEmpty("Top sobre un stack vacio");
    return S->valorInicio();
}

template<class T>
void ColaLista<T>::dequeue() /*throw(StackEmpty)*/ {
    if (empty())
        cout<<"vacio";
        //throw StackEmpty("Top sobre un stack vacio");
    S->borrarFinal();
    n--;
}

template<class T>
ColaLista<T>::~ColaLista() {
    delete S;
}