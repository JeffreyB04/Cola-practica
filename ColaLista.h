//
// Created by jeffr on 26/8/2022.
//

#pragma once

#include "Lista.h"
#include "RunTimeException.h"

template<class T>
class ColaLista {
private:
    Lista<T> *S;
    int n;
public:
    ColaLista();

    virtual ~ColaLista();

    int size();

    bool empty() const;

    T *front() /*throw(StackEmpty)*/;

    void enqueue(T *o);

    void dequeue() /*throw(StackEmpty)*/;

};



