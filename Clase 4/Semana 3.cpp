#include "iostream"
#include "string"
using namespace std;

int main() {
	string nombre, contrasena;
	int num1, num2, opcion, R;
	cout << "Bienvenido, ingrese su nombre de Usuario: ";
	cin >> nombre;
	cout << "Ahora la contrasena por favor: ";
	cin >> contrasena;
	
	if (nombre == "Leandro" && contrasena == "1234"){
		cout << "Bienvenido " << " " << nombre << endl;
		
	 	//Calculadora
	 	cout << "Seleccione una opcion para calcular" << endl;
	 	cout << "Opcion 1: Suma" << endl;
	 	cout << "Opcion 2: Resta" << endl;
	 	cout << "Opcion 3: Multiplicacion" << endl;
	 	cout << "Opcion 4: Division" << endl;
	 	cin >> opcion;
	 	
	 	cout << "Seleccione el primer numero" << endl;
	 	cin >> num1;
	 	cout << "Seleccione el segundo numero" << endl;
	 	cin >> num2;
	 	
		switch (opcion){
			case 1:
				R = num1 + num2;
				cout << "El resultado de la suma es: " << R;
				break;
			case 2:
				R = num1 - num2;
				cout << "El resultado de la resta es: " << R;
				break;
			case 3:
				R = num1 * num2;
				cout << "El resultado de la multiplicacion es: "<< R;
				break;
			case 4:
				if (num2 == 0){
					cout << "Imposible dividir entre cero";
					break;
				} else {
				
					R = num1 / num2;
					cout << "El resultado de la division es: " << R;
					break;
				}
			}
	} else {
		cout << "Nombre de usuario o contraseña incorrecto";
		return 0;
	}
}

