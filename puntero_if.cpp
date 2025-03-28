#include<iostream>

using namespace std;

main(){
int edad,*p_edad;

cout<<"Ingrese Edad:";	
cin>>edad;
p_edad = &edad;
	if (*p_edad>=18){
	cout<<"Es mayor de edad"<<endl;
	}
	else{
	cout<<"Es menor de edad"<<endl;
	}
	
	system("PAUSE");

}
