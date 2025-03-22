#include <iostream>
using namespace std;

main(){
	
	
	cout<<"________ Array Dinamico Bidimensional ________"<<endl;
	
	int fila=0,columna=0;
	cout<<"Ingrese Fila:";
	cin>>fila;
	cout<<"Ingrese Columanas:";
	cin>>columna;
	
	int tabla[fila][columna];
	
	for (int i=0;i<fila;i++){
		
		cout<< "____________ Fila: "<<i<<"_______________"<<endl;
		for(int ii=0;ii<columna;ii++){
			int ingreso=0;
		cout<<"fila ["<<i<<"]"<<"Columna ["<<ii<<"]: ";
		cin>>ingreso;
		tabla[i][ii]= ingreso;
		}
		
	}
cout<< "____________ Mostrar Tabla_______________"<<endl;	
	for (int i=0;i<fila;i++){
		cout<< "____________ Fila: "<<i<<"_______________"<<endl;
		for(int ii=0;ii<columna;ii++){
		cout<<"fila ["<<i<<"]"<<"Columna ["<<ii<<"]: "<<tabla[i][ii]<<endl;
		}
	}
	
	
	
	system("pause");
}
