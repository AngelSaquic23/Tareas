
#include <iostream>
using namespace std;

struct Estudiante {
    int id;
    string nombre;
    string apellido;
    float nota1, nota2, nota3, nota4;
};

void ingresarDatos(Estudiante *estudiantes, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Estudiante " << i + 1 << endl;
        cout << "ID: "; cin >> estudiantes[i].id;
        cout << "Nombre: "; cin >> estudiantes[i].nombre;
        cout << "Apellido: "; cin >> estudiantes[i].apellido;
        cout << "Nota 1: "; cin >> estudiantes[i].nota1;
        cout << "Nota 2: "; cin >> estudiantes[i].nota2;
        cout << "Nota 3: "; cin >> estudiantes[i].nota3;
        cout << "Nota 4: "; cin >> estudiantes[i].nota4;
        cout << endl;
    }
}

void calcularPromedios(Estudiante *estudiantes, int n) {
    for (int i = 0; i < n; i++) {
        float promedio = (estudiantes[i].nota1 + estudiantes[i].nota2 + estudiantes[i].nota3 + estudiantes[i].nota4) / 4.0;
        cout << "Promedio del estudiante " << i + 1 << ": " << promedio << " - ";
        if (promedio > 60) cout << "Aprobado" << endl;
        else cout << "Reprobado" << endl;
    }
}

int main() {
    int n;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;

    Estudiante *estudiantes = new Estudiante[n];

    ingresarDatos(estudiantes, n);
    calcularPromedios(estudiantes, n);

    delete[] estudiantes;
    return 0;
}
