//
// Created by mafer on 27/03/2025.
//

#include "Usuario.h"
#include <iostream>

using namespace std;
// Constructor
Usuario::Usuario(int id, string nombre, string correo) {
    this->id_usuario = id;
    this->nombre = nombre;
    this->correo = correo;
}

// Getters
int Usuario::getId() {
    return id_usuario;
}

string Usuario::getNombre() {
    return nombre;
}

string Usuario::getCorreo() {
    return correo;
}

vector<Mascota*> Usuario::getMascotas() {
    vector<Mascota*> lista;
    for (auto& par : mascotas) {
        lista.push_back(par.second);
    }
    return lista;
}

// Setters
void Usuario::setNombre(string nombre) {
    this->nombre = nombre;
}

void Usuario::setCorreo(string correo) {
    this->correo = correo;
}

// Métodos
void Usuario::adoptarMascota(Mascota* nueva_mascota) {
    mascotas[nueva_mascota->getNombre()] = nueva_mascota;
}

void Usuario::mostrarMascotas() {
    cout << "Mascotas de " << nombre << ":" << endl;
    for (auto& par : mascotas) {
        cout << "- " << par.first << " (Edad: " << par.second->getEdad() << " años)" << endl;
    }
}

Mascota* Usuario::buscarMascota(string nombre) {
    if (mascotas.find(nombre) != mascotas.end()) {
        return mascotas[nombre];
    }
    return nullptr;
}
