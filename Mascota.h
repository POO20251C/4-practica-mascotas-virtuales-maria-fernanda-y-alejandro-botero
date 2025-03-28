//
// Created by mafer on 27/03/2025.
//

#ifndef MASCOTA_H
#define MASCOTA_H

#include <string>
#include <vector>
#include <map>
#include "Habilidad.h"

using namespace std;

class Mascota {
public:
    // Constructor
    Mascota() = default;
    Mascota(int id, string nombre, int edad);

    // Getters
    int getIdMascota();
    string getNombre();
    int getEdad();
    string getEstadoSalud();
    string getEstadoEmocional();
    int getNivelEnergia();
    vector<Habilidad*> getHabilidades();

    // Setters
    void setNombre(string nombre);
    void setEdad(int edad);
    void setEstadoSalud(string estado);
    void setEstadoEmocional(string estado);
    void setNivelEnergia(int energia);

    // Métodos
    void aprenderHabilidad(Habilidad* habilidad);
    void mostrarHabilidades();
    void recibirObjeto(string objeto, string efecto);
    void evolucionar();

private:
    int id_mascota;
    string nombre;
    int edad;
    int nivel_energia;
    string estado_salud;
    string estado_emocional;
    map<string, Habilidad*> habilidades;  // Relaciona nombre de habilidad con su objeto
};




#endif //MASCOTA_H