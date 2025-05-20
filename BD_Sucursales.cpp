#include <iostream>
#include <mysql.h>

using namespace std;

MYSQL* conectarBD() {
    MYSQL* conn = mysql_init(0);
    conn = mysql_real_connect(conn, "127.0.0.1", "root", "root", "BD_Sucursales", 3306, NULL, 0);
    if (conn) {
        cout << "Conexión exitosa a la base de datos!" << endl;
    } else {
        cout << "Error en la conexión: " << mysql_error(conn) << endl;
    }
    return conn;
}

void crearSucursal(MYSQL* conn) {
    string nombre, ubicacion, fecha;
    int trabajadores;
    bool activo;

    cout << "Nombre: "; cin >> ws; getline(cin, nombre);
    cout << "Ubicacion: "; getline(cin, ubicacion);
    cout << "Cantidad de trabajadores: "; cin >> trabajadores;
    cout << "Fecha inauguración (YYYY-MM-DD): "; cin >> fecha;
    cout << "Activo (1=Sí, 0=No): "; cin >> activo;

    string insert = "INSERT INTO sucursales(nombre, ubicacion, cantidad_trabajadores, fecha_inauguracion, activo) VALUES ('" +
                    nombre + "', '" + ubicacion + "', " + to_string(trabajadores) + ", '" + fecha + "', " + to_string(activo) + ")";
    if (mysql_query(conn, insert.c_str()) == 0) {
        cout << "Sucursal creada correctamente." << endl;
    } else {
        cout << "Error al crear: " << mysql_error(conn) << endl;
    }
}

void leerSucursales(MYSQL* conn) {
    if (mysql_query(conn, "SELECT * FROM sucursales") == 0) {
        MYSQL_RES* res = mysql_store_result(conn);
        MYSQL_ROW row;

        cout << "\nID | Nombre | Ubicacion | Trabajadores | Fecha Inaug. | Activo\n";
        while ((row = mysql_fetch_row(res))) {
            cout << row[0] << " | " << row[1] << " | " << row[2] << " | " << row[3] << " | " << row[4] << " | " << (row[5][0] == 1 ? "Sí" : "No") << endl;
        }
        mysql_free_result(res);
    } else {
        cout << "Error al leer: " << mysql_error(conn) << endl;
    }
}

void actualizarSucursal(MYSQL* conn) {
    int id;
    cout << "ID de la sucursal a actualizar: "; cin >> id;
    string nombre, ubicacion, fecha;
    int trabajadores;
    bool activo;

    cout << "Nuevo nombre: "; cin >> ws; getline(cin, nombre);
    cout << "Nueva ubicacion: "; getline(cin, ubicacion);
    cout << "Nueva cantidad de trabajadores: "; cin >> trabajadores;
    cout << "Nueva fecha inauguración (YYYY-MM-DD): "; cin >> fecha;
    cout << "Activo (1=Sí, 0=No): "; cin >> activo;

    string update = "UPDATE sucursales SET nombre='" + nombre + "', ubicacion='" + ubicacion +
                    "', cantidad_trabajadores=" + to_string(trabajadores) +
                    ", fecha_inauguracion='" + fecha + "', activo=" + to_string(activo) +
                    " WHERE id_sucursal=" + to_string(id);

    if (mysql_query(conn, update.c_str()) == 0) {
        cout << "Sucursal actualizada correctamente." << endl;
    } else {
        cout << "Error al actualizar: " << mysql_error(conn) << endl;
    }
}

void eliminarSucursal(MYSQL* conn) {
    int id;
    cout << "ID de la sucursal a eliminar: "; cin >> id;

    string del = "DELETE FROM sucursales WHERE id_sucursal=" + to_string(id);

    if (mysql_query(conn, del.c_str()) == 0) {
        cout << "Sucursal eliminada correctamente." << endl;
    } else {
        cout << "Error al eliminar: " << mysql_error(conn) << endl;
    }
}

int main() {
    MYSQL* conn = conectarBD();
    if (!conn) return 1;

    int opcion;
    do {
        cout << "\n---- Menú CRUD ----" << endl;
        cout << "1. Crear sucursal" << endl;
        cout << "2. Ver sucursales" << endl;
        cout << "3. Actualizar sucursal" << endl;
        cout << "4. Eliminar sucursal" << endl;
        cout << "0. Salir\nOpción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: crearSucursal(conn); break;
            case 2: leerSucursales(conn); break;
            case 3: actualizarSucursal(conn); break;
            case 4: eliminarSucursal(conn); break;
        }
    } while (opcion != 0);

    mysql_close(conn);
    return 0;
}
