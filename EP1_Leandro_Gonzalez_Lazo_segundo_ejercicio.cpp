#include "iostream"

using namespace std;

int main(){
	
	int a, b, opcion; //Damos valor entero a 3 palabras o letras
	
	//Formulamos cout para darle a entender al usuario que opciones puede escoger
	cout << "Bienvenido a la calculadora, seleccione una opcion:" << endl;
	cout << "Opcion 1: Suma" << endl;
	cout << "Opcion 2: Resta" << endl;
	cout << "Opcion 3: Multiplicacion" << endl;
	cout << "Opcion 4: Division" << endl;
	cin >> opcion; //Guardamos esa respuesta en una de las 3 palabras o letras a la cual le dimos valor entero antes

	//Hacemos un if para que el usuario no pueda elegir una opcion invalida arriba
	if (opcion > 0 && opcion < 5){ 
	
		//Preguntamos al usuario por los dos numeros con los que quiere realizar la operacion
		cout << "Introduzca el primer numero, advertencia, no se aceptan numeros menores a 0 o mayores que 100" << endl;
		cin >> a; //Guardamos ese numero en una de las letras o palabras de antes, no puede ser la misma que ya escogimos para alojar la opcion
		cout << "Introduzca el segundo numero, advertencia, no se aceptan numeros menores a 0 o mayores que 100" << endl;
		cin >> b; //Guardamos ese segundo numero en una de las letras o palabras de antes, no puede ser nignuna de las dos anteriores
	
		//Hacemos if para que no pueda pasar del rango de 0 para abajo o de 100 para arriba
		if (a > 0 && a < 100 && b >= 0 && b < 100){
			switch (opcion){ //Hacemos switch para tener mas facil y automatico la respuesta a la opcion dada por el usuario
				case 1: //En el primer caso (cuando el usuario elige la opcion 1) se da el resultado de la suma, de no ser asi, seguira con los otros casos
					cout << "La suma de los dos numeros es: " << a + b << endl;
					break;
				case 2:
					cout << "La resta de los dos numeros es: " << a - b << endl;
					break;
				case 3:
					cout << "La multiplicacion de los dos numeros es: " << a * b << endl;
					break;
				case 4:
					if (b == 0){ //Hacemos if para la division, no se puede dividir entre 0 asi que hay que validarlo
						cout << "No se puede dividir entre 0" << endl;
						break;	
					} else {
						cout << "La division de los dos numeros es: " << a / b << endl;
						break;
					}
			}
		} else {
			cout << "No se aceptan numeros menores a 0 o mayores a 100" << endl;
			return 0;
		}
	} else {
		cout << "No existe tal opcion" << endl;
		return 0;
	}
	return 0; //Termina el proceso
}
