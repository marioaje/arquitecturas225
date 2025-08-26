#include <iostream>
using namespace std;


int sumar(int a, int b) {
	return a + b;
}

int main() {

	int num1, num2;


	//Entrada de datos
	cout <<  "Ingrese el primer numero";
	cin >> num1;
	cout <<  "Ingrese el segundo numero";
	cin >> num2;


	//LLmamaos a las funciones
	cout << "La suma es: " << sumar(num1, num2) << endl;




	return 0;

}

