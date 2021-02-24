#include <iostream>
#include <conio.h>

using namespace std;

void pedirDatos();

template< class DATO>   //lantilla de funcion, que puede recibir cualquier tipo de datos
void convertir(DATO x);

void convertirkelvin(float&);

void  convertir_r(float,float&, float&);

float n1;

int main(){
		
	pedirDatos();
	cout<<endl;
    convertir(n1);
    convertirkelvin(n1);
    
    float reamur=0, rankine=0;
	cout<<"Los valores iniciales son: "<<reamur<<"  "<<rankine<<endl;
	cout<<"Memoria: "<<&reamur<<endl;
	cout<<"Memoria: "<<&rankine<<endl;
    convertir_r(n1,reamur, rankine);
    cout<<"Los nuevos valores son: "<<reamur<<"  "<<rankine<<endl;
   // cout<<&n1;
	getch();
	return 0;
}

void pedirDatos()
{
	cout<<"Digite la temperatura a calcular: ";
	cin>>n1;
}
template < class DATO>
void convertir(DATO x)
{
	x =(x*9/5)+32;
	cout<<"En grados farenheit: "<<x<<endl;
}
void convertirkelvin(float& y)
{
	y = y+273.15;
	cout<<"La temperatura en kelvin es: "<<y<<endl;
}

void  convertir_r(float x,float& reamur, float& rankine){
	reamur=x*1.8;
	rankine=(x*1.8)+491.67;
}



