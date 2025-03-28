//
// Created by mafer on 27/03/2025.
//

#ifndef USUARIO_H
#define USUARIO_H
#include <string>
#include <vector>
#include "Mascota.h"

using namespace std;

class Usuario {
public:
    // Constructor
    Usuario() = default;
    Usuario(int id, string nombre, string correo);

    // Getters
    int getId();
    string getNombre();
    string getCorreo();
    vector<Mascota*> getMascotas();

    // Setters
    void setNombre(string nombre);
    void setCorreo(string correo);

    // Métodos
    void adoptarMascota(Mascota* nueva_mascota);
    void mostrarMascotas();
    Mascota* buscarMascota(string nombre);

private:
    int id_usuario;
    string nombre;
    string correo;
    map<string, Mascota*> mascotas;  // Relaciona nombre de la mascota con su objeto
};



#endif //USUARIO_H
