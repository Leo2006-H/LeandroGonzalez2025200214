#include "iostream"
#include "cstdlib"
#include "cmath"

using namespace std;

int main(){
	int par;
	for (par = 2; par <= 10; par++){
		if (par % 2 == 0){ //Se usa porcentaje para que el resultado lo cuente como el resto y no el resultado real
			cout << par << endl;
		}
	}
	return 0;
}
