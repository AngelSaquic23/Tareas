#include <iostream>
using namespace std;

void ingresarDatos(int n, int id[], string nombres[], string apellidos[], float notas1[], float notas2[], float notas3[], float notas4[]) {
    for (int i = 0; i < n; i++) {
        cout << "Estudiante " << i + 1 << endl;
        cout << "ID: "; cin >> id[i];
        cout << "Nombre: "; cin >> nombres[i];
        cout << "Apellido: "; cin >> apellidos[i];
        cout << "Nota 1: "; cin >> notas1[i];
        cout << "Nota 2: "; cin >> notas2[i];
        cout << "Nota 3: "; cin >> notas3[i];
        cout << "Nota 4: "; cin >> notas4[i];
        cout << endl;
    }
}

void calcularPromedios(int n, float notas1[], float notas2[], float notas3[], float notas4[]) {
    for (int i = 0; i < n; i++) {
        float promedio = (notas1[i] + notas2[i] + notas3[i] + notas4[i]) / 4.0;
        cout << "Promedio del estudiante " << i + 1 << ": " << promedio << " - ";
        if (promedio > 60) cout << "Aprobado" << endl;
        else cout << "Reprobado" << endl;
    }
}

int main() {
    int n;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;

    int id[n];
    string nombres[n], apellidos[n];
    float notas1[n], notas2[n], notas3[n], notas4[n];

    ingresarDatos(n, id, nombres, apellidos, notas1, notas2, notas3, notas4);
    calcularPromedios(n, notas1, notas2, notas3, notas4);

    return 0;
}
