/*
& Obtiene la direcci?n de una variable.
*Define una variable como puntero.
*Obtiene el contenido de una variable puntero.
Los punteros son muy utiles cuando queremos crear arrays dinamicos y matrices dinamicas 

nota
Son variables punteros aquellas que apuntan a la posici?n en donde otras variablels de programa 
se almacenan. 
*/
#include<iostream>

using namespace std;

main(){
	// Inicializar un puntero
	int edad,*p_edad;
	edad =18;
	p_edad=&edad;
	
	cout<<"Edad Valor:"<<*p_edad<<endl;
	cout<<"Edad Direccion:"<<p_edad<<endl;
	cout<<"------------"<<endl;
	*p_edad = 24;
	cout<<"Edad Valor:"<<*p_edad<<endl;
	cout<<"Edad Direccion:"<<p_edad<<endl;
	// nueva variable al mismo puntero
	cout<<"------Nueva variable ------"<<endl;
	int edad2 =18;
	p_edad=&edad2;
	
	cout<<"Edad Valor:"<<*p_edad<<endl;
	cout<<"Edad Direccion:"<<p_edad<<endl;
	
	cout<<"------Nueva valor ------"<<endl;
	
	*p_edad=30;
	
	cout<<"Edad Valor:"<<*p_edad<<endl;
	cout<<"Edad Direccion:"<<p_edad<<endl;
	
	
	cout<<"------d------"<<endl;
	int numero;
	int *p_numero = &numero;
	*p_numero = 11;
	cout<<"Valor:"<<*p_numero<<endl;
	cout<<"Direccion:"<<p_numero<<endl;
	
	system("PAUSE");

}
