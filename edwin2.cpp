#include <iostream>

using namespace std;

int main(){
	
	int num=0, cont=1;
	cout<<"Digite un numero"<<endl;
	cin>>num;
	
	if(num<=9)
	{
		cout<<"El numero de digitos es 1";
	}
else
	do{
		cont ++;
		num/=10;
}
		while((num/10)!=0);
		cout<<"El resultado es: "<<cont<<endl;
		return 0;
}
