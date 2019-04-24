#include <iostream>

using namespace std;

int main(){
	int diaCalendario;
	int festivo;
	double valorUnitario;
	double subtotal=0;
	double total;

	cout << "Bienvenido, por favor indique el dia calendario: ";
	cin >> diaCalendario;
	cout << endl;
	cout << "Por favor indique si es festivo (1 para festivo ::: 0para para normal): ";
	cin >> festivo;
	cout << endl;

	for(int i=1; i<=5; i++){
        cout <<"Por Favor ingrese el valor del producto "<< i << ": ";
        cin >> valorUnitario;
        cout << endl;
        subtotal += valorUnitario;
	}

	subtotal *= 2857,14286;
	cout <<"subtotal: " << subtotal << endl;
	if(((diaCalendario % 5)== 0)&(festivo==0)){
        subtotal =subtotal-(subtotal*0.07);
        cout << "aplica para descuento del 7%: " << subtotal<< endl;
	}

	total=(subtotal*0.16)+subtotal;
	cout<<"valor total compra: " << total << endl;

    return 0;
}
