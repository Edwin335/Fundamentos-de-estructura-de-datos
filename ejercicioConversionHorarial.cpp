#include <iostream>
#include <conio.h>

using namespace std;
int convertir_Uno(int);

void convertir_Dos(int, int&,int&);
int valor;

int main()
{
	
int dias, horas=0,minutos=0,segundos=0;

cout<<"Digite el valor en dias ";
cin>>dias;
cout<<endl;

convertir_Uno(dias);
cout<<"El valor a horas es: "<<valor<<endl;
convertir_Dos(dias, minutos,segundos);
cout<<"En minutos es: "<<minutos<<endl;
cout<<"En segundos es: "<<segundos<<endl;
}

int convertir_Uno(int x)
{
	valor=x*24;
	return valor;
}
void convertir_Dos(int dias, int& minutos,int& segundos)
{
	//horas=valor*1440;
	minutos=dias*1440;	
	segundos=dias*86400;
}


