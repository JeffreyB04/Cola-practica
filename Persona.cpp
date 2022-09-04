//
// Created by ESCINF on 29/08/2022.
//

#include "Persona.h"

Persona::Persona() {}

Persona::Persona(const string &id, const string &nombre, const string &numTarjeta) : id(id), nombre(nombre),
                                                                                     numTarjeta(numTarjeta) {}

Persona::~Persona() {

}

const string &Persona::getId() const {
    return id;
}

void Persona::setId(const string &id) {
    Persona::id = id;
}

const string &Persona::getNombre() const {
    return nombre;
}

void Persona::setNombre(const string &nombre) {
    Persona::nombre = nombre;
}

const string &Persona::getNumTarjeta() const {
    return numTarjeta;
}

void Persona::setNumTarjeta(const string &numTarjeta) {
    Persona::numTarjeta = numTarjeta;
}

ostream &operator<<(ostream &os, const Persona &persona) {
    os << "id: " << persona.id << " nombre: " << persona.nombre << " numTarjeta: " << persona.numTarjeta;
    return os;
}
