//
// Created by ESCINF on 29/08/2022.
//

#pragma once
#include <iostream>
using namespace std;

class Persona {
private:
    string id;
    string nombre;
    string numTarjeta;
public:
    Persona();

    Persona(const string &id, const string &nombre, const string &numTarjeta);

    virtual ~Persona();

    const string &getId() const;

    void setId(const string &id);

    const string &getNombre() const;

    void setNombre(const string &nombre);

    const string &getNumTarjeta() const;

    void setNumTarjeta(const string &numTarjeta);

    friend ostream &operator<<(ostream &os, const Persona &persona);


};



