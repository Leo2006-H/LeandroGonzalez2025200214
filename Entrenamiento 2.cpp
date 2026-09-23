#include "iostream"
#include "string"

using namespace std;

int main(){
	double a;
	cout << "Ingrese un numero" << endl;
	cin >> a;
	
	if (a > 0){
		cout << "El numero es positvo" << endl;
		return 0;
	} else if (a < 0){
		cout << "El numero es negativo" << endl;
		return 0;	
	} else {
		cout << "El numero es 0" << endl;
		return 0;
	}
	return 0;
}