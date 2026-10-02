#include "iostream"
#include "cstdlib"
//En esta clase se da while, for y do while

using namespace std;

int main(){
	int n = 1;
	while (n <= 10){
		cout << "n= " << n << endl;
		n++; //Tambien puede ponerse dentro del cout, esto sirve para que n vaya aumentando en cada bucle
		system ("PAUSE");
	}
	return 0;
}
