//
// Created by aleja on 27/03/2025.
//

#include "Sistema.h"

#include <string>
#include <vector>
#include "Sistema.h"

using namespace std;

//Constructor

#include "Sistema.h"
#include <iostream>

// Constructor
Sistema::Sistema() {
    // Inicializar tipos de mascotas seleccionados aleatoriamente
    this->tipo_de_mascotas = {"Pikachu", "Squirtle", "Gengar", "Eevee", "Lucario"};

    // Inicializar estados emocionales
    this->estados_emocionales_disponibles = {"Feliz", "Triste", "Ansioso", "Enojado", "Motivado", "Asustado", "Curioso", "Relajado"};

    // Inicializar estados de salud
    this->estados_de_salud_disponibles = {"Saludable", "Cansado", "Hambriento", "Deshidratado", "Resfriado", "Adormilado"};


    // Habilidades Universales (disponibles para todas las mascotas)
    this->habilidades_universales = {Habilidad("Bailar", "Movimientos rítmicos para expresar felicidad", 1),
                              Habilidad("Comunicarse", "Hace sonidos para interactuar contigo", 1),
                              Habilidad("Dormir", "Se relaja y recupera energía", 1),
                              Habilidad("Jugar", "Se divierte con juguetes y personas", 1)};

    // Definir habilidades para cada tipo de mascota
    this->habilidades_por_tipo["Pikachu"] = {Habilidad("Buscar objetos", "Encuentra cosas pequeñas", 2),
                                     Habilidad("Hacer trucos", "Responde a comandos como saltar", 3),
                                     Habilidad("Explorar", "Se aventura por la casa con curiosidad", 2),
                                     Habilidad("Reconocer emociones", "Detecta si estás triste o feliz", 4),
                                     Habilidad("Crear chispas", "Genera pequeñas descargas eléctricas al emocionarse", 5)};

    this->habilidades_por_tipo["Squirtle"] = {Habilidad("Salpicar agua", "Rocía agua cuando está emocionado", 2),
                                      Habilidad("Nadar", "Nada con gracia en el agua", 5),
                                      Habilidad("Refrescar el ambiente", "Expulsa agua para refrescarse a sí mismo y a otros", 4),
                                      Habilidad("Esconderse en su caparazón", "Se protege cuando se siente inseguro", 3),
                                      Habilidad("Chapotear", "Juega en el agua haciendo ruido", 1)};

    this->habilidades_por_tipo["Gengar"] = {Habilidad("Hacer sombras divertidas", "Juega con su silueta en la pared", 2),
                                    Habilidad("Esconderse en la oscuridad", "Ama los lugares oscuros", 3),
                                    Habilidad("Asustar por diversión", "Le gusta jugar bromas sin ser peligroso", 5),
                                    Habilidad("Detectar energía", "Percibe cambios en el ambiente", 4),
                                    Habilidad("Convertirse en niebla", "Se difumina como una sombra", 5)};

    this->habilidades_por_tipo["Eevee"] = {Habilidad("Aprender rápido", "Capaz de adaptarse a diferentes entornos", 3),
                                   Habilidad("Hacerse el dormido", "Pretende dormir cuando no quiere ser molestado", 2),
                                   Habilidad("Ronronear", "Hace sonidos suaves cuando está feliz", 1),
                                   Habilidad("Camuflarse", "Se oculta fácilmente en su entorno", 4),
                                   Habilidad("Vincularse contigo", "Crea lazos emocionales muy fuertes", 5)};

    this->habilidades_por_tipo["Lucario"] = {Habilidad("Sentir emociones", "Percibe el estado de ánimo de las personas", 5),
                                     Habilidad("Meditar", "Se sienta a concentrarse y relajarse", 3),
                                     Habilidad("Ejercitarse", "Le gusta entrenar con su dueño", 4),
                                     Habilidad("Ser disciplinado", "Siempre sigue rutinas establecidas", 5),
                                     Habilidad("Aprender rápido", "Puede entender órdenes con facilidad", 4)};



    // Inicializar el array de usuarios vacío
    usuarios = {};
};
