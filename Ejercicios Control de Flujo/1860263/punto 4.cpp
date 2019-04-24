#include <iostream>
using namespace std;

int main(){
int numero;
float a,b,suma,resta,divsion,multiplicacion;

	cout<<"Calculadora"<<endl;
	cout<<"1:suma"<<endl;
	cout<<"2:resta"<<endl;
	cout<<"3:multiplicacion"<<endl;
	cout<<"4:division"<<endl;
	
	cout<<"ingrese numero: ";cin>>numero;
	
	if(numero==1){
		cout<<"ingrese el primer numero: "<<endl;
		cin>>a;
		cout<<"ingrese el segundo numero: "<<endl;
		cin>>b;
		suma = a + b;
		cout<<"La suma es: "<<suma;
		
		return 0;
		}
	
	if(numero==2){
		cout<<"ingrese el primer numero: "<<endl;
		cin>>a;
		cout<<"ingrese el segundo numero: "<<endl;
		cin>>b;
		resta = a - b;
		cout<<"La resta es: "<<resta;
		
		return 0;
		}
	
		if(numero==3){
		cout<<"ingrese el primer numero: "<<endl;
		cin>>a;
		cout<<"ingrese el segundo numero: "<<endl;
		cin>>b;
		multiplicacion = a * b;
		cout<<"La multiplicacion es: "<<multiplicacion;
		
		return 0;
		}
	
		if(numero==4){
		cout<<"ingrese el primer numero: "<<endl;
		cin>>a;
		cout<<"ingrese el segundo numero: "<<endl;
		cin>>b;
	    divsion = a / b;
		cout<<"La divsionn es: "<<divsion;
		
		return 0;
		}

		if(numero>4){
		cout<<"El numero es invalido "<<endl;
	return 0;
	
	}
	
	}
	

