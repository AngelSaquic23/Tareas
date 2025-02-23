#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion,fecha_nacimiento;
	int telefono;
	cout<<"Ingrese nit: ";
	cin>>nit;
	cout<<"Ingrese nombres: ";
	cin>>nombres;
	cout<<"Ingrese apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Fecha Nacimiento: ";
	cin>>fecha_nacimiento;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	
	Cliente obj = Cliente (nombres,apellidos,direccion,telefono,fecha_nacimiento,nit);
	obj.leer();
	cout<<"Ingrese el nit a modificar:";
	cin>>nit;
	obj.setNit(nit);
	cout<<obj.getNit()<<","<<obj.getNombres()<<" "<<obj.getApellidos()<<endl;
}
