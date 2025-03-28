#include<iostream>

using namespace std;

int main(){
int total=0;
int notas[total];
char res;
int *p_notas = notas;
do{
cout<<"Ingrese Nota["<<total<<"]:";	
cin>>notas[total];
//cout<<&p_notas;	
total++;
cout<<"Desea ingresar otro dato (s/n):";	
cin>>res;
}while(res=='s');


for (int i=0;i<total;i++){
cout<<"Nota"<<i<<":"<<*p_notas<<endl;	
//cout<<&p_notas<<endl;	
p_notas++;

}
	
	system("PAUSE");
	return 0;
}
