CREATE DATABASE IF NOT EXISTS BD_Sucursales;
USE BD_Sucursales;

CREATE TABLE IF NOT EXISTS sucursales (
    id_sucursal SMALLINT AUTO_INCREMENT PRIMARY KEY,
    nombre VARCHAR(60) NOT NULL,
    ubicacion VARCHAR(100) NOT NULL,
    cantidad_trabajadores INT NOT NULL,
    fecha_inauguracion DATE NOT NULL,
    activo BIT NOT NULL
);
