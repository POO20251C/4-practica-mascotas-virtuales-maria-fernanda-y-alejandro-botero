#include <iostream>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
vector<Usuario> usuarios;  // Lista de usuarios registrados
    int opcion, id_usuario = 1, id_mascota = 1;
    string nombre_usuario, correo, nombre_mascota;

    cout << "¡Bienvenido a PixelPets!\n";

    while (true) {
        cout << "\nOpciones:\n";
        cout << "1. Registrar Usuario\n";
        cout << "2. Adoptar Mascota\n";
        cout << "3. Ver Mis Mascotas\n";
        cout << "4. Enseñar Habilidad a Mascota\n";
        cout << "5. Mostrar Usuarios Registrados\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {  // Registrar un nuevo usuario
                cout << "Ingrese su nombre: ";
                cin >> nombre_usuario;
                cout << "Ingrese su correo: ";
                cin >> correo;
                usuarios.emplace_back(id_usuario++, nombre_usuario, correo);
                cout << "Usuario registrado con éxito.\n";
                break;
            }

            case 2: {  // Adoptar una mascota
                if (usuarios.empty()) {
                    cout << "No hay usuarios registrados. Registre un usuario primero.\n";
                    break;
                }

                cout << "Usuarios disponibles:\n";
                for (const auto& usuario : usuarios) {
                    cout << usuario.getId() << ". " << usuario.getNombre() << endl;
                }

                int id;
                cout << "Ingrese el ID del usuario que adoptará la mascota: ";
                cin >> id;

                Usuario* usuario = nullptr;
                for (auto& u : usuarios) {
                    if (u.getId() == id) {
                        usuario = &u;
                        break;
                    }
                }
                if (!usuario) {
                    cout << "Usuario no encontrado.\n";
                    break;
                }

                cout << "Ingrese el nombre de su nueva mascota: ";
                cin >> nombre_mascota;
                Mascota* nueva_mascota = new Mascota(id_mascota++, nombre_mascota, 0);
                usuario->adoptarMascota(nueva_mascota);
                cout << "¡Felicidades! " << usuario->getNombre() << " ha adoptado a " << nombre_mascota << ".\n";
                break;
            }
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.