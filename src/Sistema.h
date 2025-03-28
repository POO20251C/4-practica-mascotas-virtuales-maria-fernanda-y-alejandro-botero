//
// Created by aleja on 27/03/2025.
//

#ifndef SISTEMA_H
#define SISTEMA_H



#include <string>
#include <vector>
#include <map>
#include "Usuario.h"
#include "Habilidad.h"
using namespace std;

//Crearemos la clase Sistema la cual almacenara

//1. Un array de Habilidades disponibles para las mascotas

//2. Un array de estados de Animo disponibles para las mascotas

//3. Un array de estados de salud disponibles para las mascotas


class Sistema{
public:
    //Atributos del sistema
    vector<string> tipo_de_mascotas;
    map<string, vector <Habilidad>> habilidades_por_tipo;
    vector<Habilidad> habilidades_universales;
    vector<string> estados_emocionales_disponibles; //Lista de Emociones Disponibles para las mascotas
    vector<string> estados_de_salud_disponibles; //Lista de Estados de Salud de Una Mascota
    vector<Usuario> usuarios;   //Lista de Usuarios Registrados

    //Constructor Vacio
    Sistema();
};



#endif //SISTEMA_H
