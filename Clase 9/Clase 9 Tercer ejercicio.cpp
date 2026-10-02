#include "iostream"
#include "cstdlib"

using namespace std;

int main(){
	const int centinela = -1;
	float nota, contador = 0, suma = 0;
	cout << "Introduzca siguiente nota -1 centinela: ";
	cin >> nota;
	while (nota != centinela){
		contador ++;
		suma += nota;
		cout << "Introduzca la siguiente nota : -1 centinela: ";
		cin >> nota;
    }
	if (contador > 0){
		cout << "media = " << suma / contador << endl;
	} else {
		cout << "No hay notas";
	}
	system ("PAUSE");
	return EXIT_SUCCESS;
}
