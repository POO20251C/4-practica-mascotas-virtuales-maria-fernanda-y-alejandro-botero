//
// Created by mafer on 28/03/2025.
//

#include "Habilidad.h"
#include <iostream>

// Constructor
Habilidad::Habilidad(string nombre, string descripcion, int nivel_requerido) {
    this->nombre = nombre;
    this->descripcion = descripcion;
    this->nivel_requerido = nivel_requerido;
}

// Getters
string Habilidad::getNombre() {
    return nombre;
}

string Habilidad::getDescripcion() {
    return descripcion;
}

int Habilidad::getNivelRequerido() {
    return nivel_requerido;
}