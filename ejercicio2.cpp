#include <iostream>
using namespace std;


void datos();
int operacion(int x);
void calculado(int r);

int anio;


int main(){
	
//int e;	
	

datos();
operacion(anio);
calculado(anio);
cout<<endl<<"su edad es de "<<operacion(anio)<<" anios";
return 0;
	
}

void datos()
{
	cout<<"Digite su año de nacimiento ";
	cin>>anio;

}

int operacion(int x)
{
	int resul;
	resul = (2021 - x);
	return resul;
}

void calculado(int r)
{
	if((r >= 1)&&(r <=5))
	{
		cout<<"Usted se encuentra en la etapa Infante";
	}
	else if((r >=6 )&&(r<=10))
	{
		cout <<"Usted se encuentra en la etapa Niñez";
	}
	if((r >=11)&&(r<=20 ))
	{
	   cout<<"Usted se encuentra en la etapa Adolescente";	
	}
	else if((r >=21 )&&(r<=50))
	{
		cout <<"Usted se encuentra en la etapa Adulto";
	}
	if(r >= 50)
	{
	   cout<<"Usted se encuentra en la etapa Adulto Mayor";	
	}
	
}
