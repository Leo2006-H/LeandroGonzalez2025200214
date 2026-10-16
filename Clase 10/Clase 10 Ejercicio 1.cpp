#include "iostream"
#include "cstdlib"
#include "cmath"

using namespace std;
//Nota: las comillas simples ('') sirven para representar un caracter sin que tome en cuenta algun valor numerico ingresado en la letra
int main(){
	char letra; 
	cout << "Escriba una letra: " << endl;
	cin >> letra;
	while (letra != 'a' && letra != 'e' && letra != 'i' && letra != 'o' && letra != 'u' ){
		cout << "No es vocal minuscula, intentalo de nuevo" << endl;
		cin >> letra;
	}
	cout << letra << " es una vocal minuscula" << endl;
	return 0;
}
