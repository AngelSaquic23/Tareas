#include<iostream>

using namespace std;

main(){
int notas[4];
int *p_notas = notas;

for (int i=0;i<4;i++){
cout<<"Ingrese Nota"<<i<<":";	
cin>>notas[i];

}

for (int i=0;i<4;i++){
cout<<"Nota"<<i<<":"<<*p_notas<<endl;	
cout<<"Nota"<<i<<":"<<p_notas<<endl;	
p_notas++;

}
	
	system("PAUSE");

}
