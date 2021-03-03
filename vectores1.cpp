#include <iostream>
#include <ctype.h>
#include <string.h>
#include <conio.h>

using namespace std;

int main()
{
	//int  numeros[5]={1,2,3,4,5}; // he llenado el vector o array
	
	int n, suma = 0;
    cout<<"Dijite las posiciones del arreglo: ";
    cin>>n;
    int numeros[n];
    
    //llenado el vector
	for(int i=0;i<n;i++)
	{
		cout<<"Digite numero: ";
		cin>>numeros[i];
	}
		for(int i=0;i<n;i++)
	{
		cout<<i<<" -> "<<numeros[i]<<endl;
	}
		for(int i=0;i<n;i++)
	{
	   suma+=numeros[i];//
	   cout<<"  "<<suma<<endl;
	}
	cout<<"La suma de los elementos es: "<<suma<<endl<<endl;
	
	/*
	n=3;
	numeros[0]=1;
	numeros[1]=2;
	numeros[2]=3;
	*/
}
