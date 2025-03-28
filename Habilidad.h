//
// Created by mafer on 28/03/2025.
//

#ifndef HABILIDAD_H
#define HABILIDAD_H
#include <string>
#include <vector>


class Habilidad {
public:
    // Constructor
    Habilidad() = default;
    Habilidad(string nombre, string descripcion, int nivel_requerido);

    // Getters
    string getNombre();
    string getDescripcion();
    int getNivelRequerido();

private:
    string nombre;
    string descripcion;
    int nivel_requerido;

};



#endif //HABILIDAD_H
