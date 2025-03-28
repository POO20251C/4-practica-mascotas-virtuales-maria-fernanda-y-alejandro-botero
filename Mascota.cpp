//
// Created by mafer on 27/03/2025.
//

#include "Mascota.h"
#include <iostream>

using namespace std;

// Constructor
Mascota::Mascota(int id, string nombre, int edad) {
    this->id_mascota = id;
    this->nombre = nombre;
    this->edad = edad;
    this->nivel_energia = 100;
    this->estado_salud = "Sano";
    this->estado_emocional = "Feliz";
}

// Getters
int Mascota::getIdMascota() {
    return id_mascota;
}

string Mascota::getNombre() {
    return nombre;
}

int Mascota::getEdad() {
    return edad;
}

string Mascota::getEstadoSalud() {
    return estado_salud;
}

string Mascota::getEstadoEmocional() {
    return estado_emocional;
}

int Mascota::getNivelEnergia() {
    return nivel_energia;
}

vector<Habilidad*> Mascota::getHabilidades() {
    vector<Habilidad*> lista;
    for (auto& par : habilidades) {
        lista.push_back(par.second);
    }
    return lista;
}

// Setters
void Mascota::setNombre(string nombre) {
    this->nombre = nombre;
}

void Mascota::setEdad(int edad) {
    this->edad = edad;
}

void Mascota::setEstadoSalud(string estado) {
    this->estado_salud = estado;
}

void Mascota::setEstadoEmocional(string estado) {
    this->estado_emocional = estado;
}

void Mascota::setNivelEnergia(int energia) {
    this->nivel_energia = energia;
}

// Métodos
void Mascota::aprenderHabilidad(Habilidad* habilidad) {
    habilidades[habilidad->getNombre()] = habilidad;
}

void Mascota::mostrarHabilidades() {
    cout << "Habilidades de " << nombre << ":" << endl;
    for (const auto& par : habilidades) {
        cout << "- " << par.first << ": " << par.second->getDescripcion() << endl;
    }
}

void Mascota::recibirObjeto(string objeto, string efecto) {
    cout << nombre << " ha recibido " << objeto << ", efecto: " << efecto << endl;
}

void Mascota::evolucionar() {
    edad++;
    nivel_energia += 20;
}
