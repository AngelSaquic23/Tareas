#include <iostream>
using namespace std;

main(){

	cout<<"________ Array Dinamico ________"<<endl;
	
	int d=0;
	cout<<"Cuantas numero:";
	cin>>d;
	
	int datos[d];
	
	for (int i=0;i<d;i++){
		int ingreso=0;
		cout<<"Dato ["<<i<<"]: ";
		cin>>ingreso;
		datos[i]= ingreso;
	}
	for (int i=0;i<d;i++){
		cout<<datos[i]<<endl;
	}
	

cout<<"____________________"<<endl;
int nota = 0,tam=0,suma=0,promedio = 0;
	int notas[tam];
	char s;
	do{
		tam++;
		cout<<"Ingrese la nota "<<tam<<":";
		cin>>nota;
		notas[tam-1] = nota;
		cout<<"Desa Ingresar otra nota (s/n):";
		cin>>s;
	}while(s=='s' || s=='S');
   
	for (int i=0;i<tam ; i++){
		cout<<notas[i]<<endl;
		suma += notas[i];
	}
	    promedio = suma / tam;
	    cout<<"El promedio es:"<<promedio<<endl<<endl;
	
	
	system("pause");
}
