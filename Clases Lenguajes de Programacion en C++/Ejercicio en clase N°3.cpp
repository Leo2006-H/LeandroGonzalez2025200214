#include "iostream"
#include "string"

using namespace std;

int main(){
	
	int opcion;
	int a, b;
	// Calculadora
	cout << "Bienvenido a la calculadora\nSeleccione una opcion:" << endl;
	cout << "Opcion 1: Suma" << endl;
	cout << "Opcion 2: Resta" << endl;
	cout << "Opcion 3: Multiplicacion" << endl;
	cout << "Opcion 4: Division" << endl;
	cin >> opcion;
	
	cout << "Primer numero:" << endl;
	cin >> a;
	cout << "Segundo numero:" << endl;
	cin >> b;
	
	switch(opcion){
		case 1:
			cout << "El resultado de la suma es: " << a + b << endl;
			break;
		case 2:
			cout << "El resultado de la resta es: " << a - b << endl;
			break;
		case 3:
			cout << "El resultado de la multiplicacion es: " << a * b << endl;
			break;
		case 4:
			if (b == 0){
				cout << "No se puede dividir entre 0" << endl;
				break;
			} else {
				cout << "El resultado de la division es: " << a / b << endl;
				break;
			}
	}
	return 0;
}
