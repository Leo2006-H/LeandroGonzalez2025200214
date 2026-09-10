#include "iostream" //Archivo de cabecera o simplemente puedes poner "iostream"
#include "cstdlib" //Contiene funciones de entrada y salida
#include "string"
using namespace std;

float a, b, c; //Float es como un "int" solo que sirve para que pille tambien los decimales y los redondee, actualmente int no sirve para decimales
int opcion;

int main(){
	cout << "Bienvenido a la calculadora";
	cout << "Seleccione una opcion: " << endl;
	cout << "Escriba 1 para la opcion: Suma" << endl;
	cout << "Escriba 2 para la opcion: Resta" << endl;
	cout << "Escriba 3 para la opcion: Multiplicacion" << endl;
	cout << "Escriba 4 para la opcion: Division" << endl;
	cin >> opcion;
	
	//Numeros a introducir
	cout << "Numero 1: " << endl;
	cin >> a;
	cout << "Numero 2: " << endl;
	cin >> b;
	
	//Validador de opciones
	switch(opcion){
		case 1:
			c = a + b;
			cout << "El resultado de la suma es: " << c << endl;
			break;
		case 2:
			c = a - b;
			cout << "El resultado de la resta es: " << c << endl;
			break;
		case 3:
			c = a * b;
			cout << "El resultado de la multiplicacion es: " << c << endl;
			break;
		case 4:
			if (b == 0){
				cout << "No se puede dividir entre 0" << endl;
				break;
			} else {
				c = a / b;
				cout << "El resultado de la division es: " << c << endl;
				break;
			}
	}
	
//Otra forma de hacer esto
float suma(float a, float b);
float resta(float a, float b);
float multiplicacion(float a, float b);

float n1, n2, rsuma, rresta, rmultiplicacion;
n1 = 5;
n2 = 4;
rsuma = suma(n1,n2);
cout << "La suma de: " << n1 << " y " << n2 << endl;
cout << "es: " << rsuma << endl;
rresta = resta(n1,n2);
cout << "La resta de: " << n1 << " y " << n2 << endl;
cout << "es: " << rresta << endl;
rmultiplicacion = multiplicacion(n1,n2);
cout << "La multiplicacion de: " << n1 << " y " << n2 << endl;
cout << "es: " << rmultiplicacion << endl;
system("PAUSE");
}

float suma(float a, float b){
	return a + b;
}
float resta(float a, float b){
	return a - b;
}
float multiplicacion(float a, float b){
	return a * b;
}


