#include <iostream>
#include <fstream>
using namespace std;

struct Estudiante {
    int id;
    char nombre[30];
    char apellido[30];
    float nota1, nota2, nota3, nota4, promedio;
    char resultado[10];
};

void agregarEstudiante() {
    ofstream archivo("notas.dat", ios::binary | ios::app);
    Estudiante est;
    cout << "ID: "; cin >> est.id;
    cout << "Nombre: "; cin >> est.nombre;
    cout << "Apellido: "; cin >> est.apellido;
    cout << "Nota 1: "; cin >> est.nota1;
    cout << "Nota 2: "; cin >> est.nota2;
    cout << "Nota 3: "; cin >> est.nota3;
    cout << "Nota 4: "; cin >> est.nota4;
    est.promedio = (est.nota1 + est.nota2 + est.nota3 + est.nota4) / 4.0;
    if (est.promedio > 60) strcpy(est.resultado, "Aprobado");
    else strcpy(est.resultado, "Reprobado");
    archivo.write((char*)&est, sizeof(Estudiante));
    archivo.close();
}

void mostrarEstudiantes() {
    ifstream archivo("notas.dat", ios::binary);
    Estudiante est;
    while (archivo.read((char*)&est, sizeof(Estudiante))) {
        cout << "ID: " << est.id << ", Nombre: " << est.nombre << ", Apellido: " << est.apellido << endl;
        cout << "Promedio: " << est.promedio << " - " << est.resultado << endl << endl;
    }
    archivo.close();
}

void actualizarEstudiante(int buscarId) {
    fstream archivo("notas.dat", ios::binary | ios::in | ios::out);
    Estudiante est;
    while (archivo.read((char*)&est, sizeof(Estudiante))) {
        if (est.id == buscarId) {
            cout << "Nuevo nombre: "; cin >> est.nombre;
            cout << "Nuevo apellido: "; cin >> est.apellido;
            cout << "Nueva Nota 1: "; cin >> est.nota1;
            cout << "Nueva Nota 2: "; cin >> est.nota2;
            cout << "Nueva Nota 3: "; cin >> est.nota3;
            cout << "Nueva Nota 4: "; cin >> est.nota4;
            est.promedio = (est.nota1 + est.nota2 + est.nota3 + est.nota4) / 4.0;
            if (est.promedio > 60) strcpy(est.resultado, "Aprobado");
            else strcpy(est.resultado, "Reprobado");

            archivo.seekp((long)archivo.tellg() - sizeof(Estudiante));
            archivo.write((char*)&est, sizeof(Estudiante));
            cout << "Estudiante actualizado." << endl;
            break;
        }
    }
    archivo.close();
}

void eliminarEstudiante(int buscarId) {
    ifstream archivo("notas.dat", ios::binary);
    ofstream archivoNuevo("temp.dat", ios::binary);
    Estudiante est;
    while (archivo.read((char*)&est, sizeof(Estudiante))) {
        if (est.id != buscarId) {
            archivoNuevo.write((char*)&est, sizeof(Estudiante));
        }
    }
    archivo.close();
    archivoNuevo.close();
    remove("notas.dat");
    rename("temp.dat", "notas.dat");
    cout << "Estudiante eliminado." << endl;
}

int main() {
    int opcion, idBuscar;
    do {
        cout << "1. Agregar
2. Mostrar
3. Actualizar
4. Eliminar
5. Salir
Opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1: agregarEstudiante(); break;
            case 2: mostrarEstudiantes(); break;
            case 3: cout << "Ingrese ID a actualizar: "; cin >> idBuscar; actualizarEstudiante(idBuscar); break;
            case 4: cout << "Ingrese ID a eliminar: "; cin >> idBuscar; eliminarEstudiante(idBuscar); break;
        }
    } while (opcion != 5);
    return 0;
}