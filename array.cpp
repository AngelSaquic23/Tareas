#include <iostream>
using namespace std;

main(){
	int codigo[5]={10,20,30,40};
	
	cout<<codigo[0]<<endl;
	cout<<codigo[1]<<endl;
	cout<<codigo[2]<<endl;
	cout<<codigo[3]<<endl;
	codigo[4]=50;
	cout<<codigo[4]<<endl;
	cout<<"______________"<<endl;
	for(int i=0;i<5;i++){
		cout<<codigo[i]<<endl;
	}
	
	cout<<" ---------  for 2 ------------"<<endl;
	for( int i : codigo) 
    {
    	cout<<i<<endl;
    }
	
char nombre[30];
	cout<<"ingrese nombre:";
	//cin>>nombre;
	cin.get(nombre,30);
	
	cout<<nombre<<endl;

/*
	string nombre; 
	int datos=0;
	cout<<"Dato :";
	cin>>datos;
	cin.ignore();
	cout<<"Ingrese Nombre Completo:";
	getline(cin,nombre);
	cout<<nombre<<endl;
	*/

	cout<<"________ String ________"<<endl;
	string semana[7]={"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado"};
	
	cout<<semana[0]<<endl;
	cout<<semana[1]<<endl;
	cout<<semana[2]<<endl;
	cout<<semana[3]<<endl;
	cout<<semana[4]<<endl;
	cout<<semana[5]<<endl;
	semana[6]="Domingo";
	cout<<semana[6]<<endl;
	cout<<"______________"<<endl;
	for(int i=0;i<7;i++){
		cout<<semana[i]<<endl;
	}
	cout<<"--- Bidimensionales---"<<endl;
	int matriz[2][3]={{10,20,30},{40,50,60}};
	cout<<"0,0 :"<<matriz[0][0]<<endl;
	cout<<"0,1 :"<<matriz[0][1]<<endl;
	cout<<"0,2 :"<<matriz[0][2]<<endl;
	cout<<"1,0 :"<<matriz[1][0]<<endl;
	cout<<"1,1 :"<<matriz[1][1]<<endl;
	cout<<"1,2 :"<<matriz[1][2]<<endl;
		cout<<"--- For ---"<<endl;
		for (int i =0;i<2;i++ ){
		for (int ii =0;ii<3;ii++ ){
			cout<<i<<","<<ii<<" :"<<matriz[i][ii]<<endl;
		
	}	
	}
	
	system("pause");
}
