#include <iostream>
using namespace std;

// Funciones
int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

float dividir(int a, int b) {
    if (b == 0) {
        cout << "Error: No se puede dividir entre cero." << endl;
        return 0;
    }
    return (float)a / b;
}

int main() {
    int num1, num2;

    // Entrada de datos
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Llamada a funciones y resultados
    cout << "Suma: " << sumar(num1, num2) << endl;
    cout << "Resta: " << restar(num1, num2) << endl;
    cout << "Multiplicacion: " << multiplicar(num1, num2) << endl;
    cout << "Division: " << dividir(num1, num2) << endl;

    return 0;
}
