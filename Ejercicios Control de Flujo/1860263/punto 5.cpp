#include <iostream>
using namespace std;

int main(){
	
	int numero;
	
	cout<<"ingrese el puntaje:  ";cin>>numero;
	
	if(numero<=400){
	cout<<"Rango C";
		
	return 0;
		
	}
	
		if(numero<=700){
	cout<<"\nRango B"<<endl;
		
	return 0;
		
	}
		if(numero<=900){
	cout<<"\nRango A"<<endl;
		
	return 0;
		
	}
		if(numero<=999){
	cout<<"\nRango S"<<endl;
		
	return 0;
		
	}
	
		if(numero<=1000){
	cout<<"\nRango SA"<<endl;
		
	return 0;
		
	}
	if(numero>1000){
		cout<<"\nNumero invalido"<<endl;
		
		return 0;
		}
}
