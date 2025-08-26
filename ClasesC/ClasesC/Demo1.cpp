//Ocupamos la libreria estandar I/O
#include <stdio.h>

#include <string>


//function 
int soylafuncion() {
	return 36;
}

//Funcion principal
int main() {
	//Print
	printf("Clase Arquitectura S2 25");

	int numero = 10; //Enteros

	float decimal = 3.14;

	char caracteres = 'A';

	std::string nombres = "Mario";
	//String nombre = "Mario";
		
	int suma = 3 + 6;

	int resta = 6 - 3;

	int multiplicacion = 3 * 6;
		
	float division = 3 / 6;
	printf("if");
	if (suma > 2) {
		printf(suma + " numero mayor");

	}
	else {
		printf(suma + " numero menor");
	}


	//Ciclos???
	int i = 0;
	printf("while");
	while (i < 5) {
		printf("%d\n", i);
		i++;
	}

	printf("for");
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d\n", i);
	}


	printf("funcion:" , soylafuncion() );

	return 0; //Necesito finalizar mi programa
} 