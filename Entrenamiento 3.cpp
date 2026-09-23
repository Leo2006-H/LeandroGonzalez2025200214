#include "iostream"
#include "string"

using namespace std;

int main(){
	int a;
	cout << "Inserte un numero" << endl;
	cin >> a;
	
	if (a % 2 == 0){
		cout << "El numero es par" << endl;
	} else {
		cout << "El numero es impar" << endl;
	}
	
	bool primo = true;

	if (a < 2) {
    primo = false;
	} else {
    	for (int i = 2; i < a; i++){
       		if (a % i == 0) {
            	primo = false;
            	break;
       		}
    	}
	}

if (primo) {
    cout << "El numero es primo";
} else {
    cout << "El numero no es primo";
}
return 0;
}