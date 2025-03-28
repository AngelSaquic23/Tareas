// new = reserva un espacio en memoria
// delete [] = libera el espacio reservado en memoria
#include<iostream>

using namespace std;

main(){
int total=0,*p_notas;
char res;
p_notas = new int [total];
do{
cout<<"Ingrese Nota["<<total<<"]:";	
cin>>p_notas[total];
cout<<&p_notas<<endl;	
total++;
cout<<"Desea ingresar otro dato (s/n):";	
cin>>res;
}while(res=='s');


for (int i=0;i<total;i++){
cout<<"Nota"<<i<<":"<<*p_notas<<endl;	
cout<<&p_notas<<endl;	
p_notas++;

}
	delete[] p_notas;
	system("PAUSE");
	
}
