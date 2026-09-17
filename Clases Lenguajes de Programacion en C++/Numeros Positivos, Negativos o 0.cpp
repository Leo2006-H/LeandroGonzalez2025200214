#include "iostream"
#include "string"

using namespace std;

int main(){
	int a;
	cout << "Designe un numero" << endl;
	cin >> a;
	
	switch ((a > 0)-(a < 0)){
		case 1:
			cout << "Es positivo" << endl;
			break;
		case -1:
			cout << "Es negativo" << endl;
			break;
		case 0:
			cout << "Es 0" << endl;
			break;
	}
	return 0;
}
