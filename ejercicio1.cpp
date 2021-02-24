#include <iostream>
using namespace std;


void datos();
float operacion(float x, float y);
void calculado(float r);

float peso, estatura;


int main(){
	
float e;	
	

datos();
e =operacion(peso, estatura);
calculado(e);
return 0;
	
}

void datos()
{
	cout<<"Digite su peso actual (Kilogramo): ";
	cin>>peso;
	cout<<"Digite su estatura (Metros Cuadrados): ";
	cin>>estatura;
}

float operacion(float x, float y)
{
	float resul;
	resul = (x / (y*y));
	return resul;
}

void calculado(float r)
{
	if(r < 18.5)
	{
		cout<<"Bajo peso";
	}
	else if((r >= 18.5 )&&(r <= 24.9))
	{
		cout <<"Normal";
	}
	if((r >=25.0)&&(r <=29.9))
	{
	   cout<<"Sobrepeso";	
	}
	else if(r>=30.0)
	{
		cout<<"Obeso";
	}	
}


