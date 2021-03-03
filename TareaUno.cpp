#include<iostream>
#include<conio.h>  
#include<ctime>
#include<cstdlib>   
using namespace std;
void muestra_vector(int vec[],int);
void muestra_vectorDos(int vec[],int);

	int numeros[100], n, mayor = 0, menor;
int main()
{
muestra_vector(numeros,n);
}



void muestra_vector(int numeros[],int){


    cout<<"Dijite las posiciones del arreglo: ";
    cin>>n;
    

	for(int i=0;i<n;i++)
	{
		cout<<"Digite numero: ";
		cin>>numeros[i];
		
		
			if(i==0)
         	{
	     	 mayor = numeros[i];
	     	 menor = numeros [i];
	     	}
	        else{
	        	if(numeros[i]>mayor) mayor = numeros[i];
	        	if(numeros[i]<menor) menor = numeros[i];
			}
	        
	     		
	}
	
		cout<<"El numero mayor es: "<<mayor<<endl;
		cout<<"El numero meor es: "<<menor;
}
