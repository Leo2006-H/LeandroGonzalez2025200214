#include "iostream"
#include "string"

using namespace std;

int main(){
	string nombre, apellido;
	int edad;
	
	cout << "Bienvenido a nuestra pagina, por favor introduzca su nombre" << endl;
	cin >> nombre;
	cout << "Ahora por favor introduzca su apellido" << endl;
	cin >> apellido;
	cout << "Por ultimo, su edad" << endl;
	cin >> edad;
	
	cout << "Bienvenido " << nombre << " " << apellido << " de edad " << edad << ",esperamos que su busqueda sea placentera" << endl;
	return 0;
}