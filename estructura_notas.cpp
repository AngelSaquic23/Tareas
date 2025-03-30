#include<iostream>
using namespace std;
struct Estudiante{
	int codigos[4];
	string nombres[4];
	int notas[4];
};

main(){
Estudiante estudiante;
 for (int i=0;i<4;i++){
 	cout<<"---------------"<<i+1<<"---------------"<<endl;
 	cout<<"Ingrese Codigo: ";
	cin>>estudiante.codigos[i];
	cin.ignore();
	cout<<"Ingrese Nombre: ";
	getline(cin,estudiante.nombres[i]);
	cout<<"Ingrese Nota: ";
	cin>>estudiante.notas[i];
	
 }
	
	for (int i=0;i<4;i++){
	cout<<"Codigo: "<<estudiante.codigos[i]<<" Estudiante:"<<estudiante.nombres[i]<<" Nota:"<<estudiante.notas[i]<<endl;
	
}
system("PAUSE");
	
}


