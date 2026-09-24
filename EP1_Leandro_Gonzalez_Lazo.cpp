#include "iostream"

using namespace std;

int main(){
	
	int a; //Damos valor entero a cualquier letra, en este caso una "a"
	cout << "Por favor, escriba un numero para mostrar su respectivo numero de la semana: " << endl;
	cin >> a; //Guardara el numero en la "a" que usamos preparamos antes dandole un valor entero
	
	//Aqui el switch que permitira saber que dia de la semana es segun el numero que escribio el usuario
	switch (a){
		case 1: //En caso de que "a" sea 1 entonces reproducira este, sino, sera otro de los case
			cout << "El dia de la semana es Lunes" << endl;
			break; //Romper la funcion para salir de ella
		case 2:
			cout << "El dia de la semana es Martes" << endl;
			break;
		case 3:
			cout << "El dia de la semana es Miercoles" << endl;
			break;
		case 4:
			cout << "El dia de la semana es Jueves" << endl;
			break;
		case 5:
			cout << "El dia de la semana es Viernes" << endl;
			break;
		case 6:
			cout << "El dia de la semana es Sabado" << endl;
			break;
		case 7:
			cout << "El dia de la semana es Domingo" << endl;
			break;
		default: //En caso de no ser ninguna de las opciones anteriores debe prepararse una validacion que imprima el error del usuario
			cout << "No existe un dia de la semana para ese numero" << endl;
			break;
	}
	return 0; //Terminar el procedimiento
} 
