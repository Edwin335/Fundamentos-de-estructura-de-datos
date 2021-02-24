#include <iostream>

using namespace std;

void datos();
float calculo(float i);
void analisis(int r);

float i, a, b, c, resultado;

int main(){

	
datos();
calculo(i);
analisis(i);
	
}
void datos()
{
	
	cout<<"Digite la nota del primer corte: ";
	cin>>a;
	cout<<"Digite la nota del segundo corte: ";
	cin>>b;
	cout<<"Digite la nota del tercer corte: ";
	cin>>c;		
}


float calculo(float i)
{
	resultado = ((a*0.35)+(b*0.35)+(c*0.30));
	cout<<"resultado: "<<resultado<<endl;	
}

void analisis(int r)
{
	if(resultado <=2.9)
	{
		cout<<"Usted reprobo la materia";
	}
	else if((resultado >=3.0 )&&(resultado<=4.5))
	{
		cout <<"Usted aprobo la materia";
	}
	if(resultado >4.5)
	{
		cout<<"Excelente";
	}	
}
