#include <iostream>

using namespace std;

int procesoUno(int x);
int procesoDos(int y);
int i;


int main(){
int x, y;
procesoDos(y);
cout<<endl<<endl;	
procesoUno(x);		
}


int procesoDos(int y)
{	
	for(i=1;i<=100; i++)
	{
	cout<<i<<" ";
	}
	return 0;
}

int procesoUno(int x)
{
	for(i=100;i>=1; i--)
	{
	cout<<i<<" ";
	}
	return 0;
}
