#include "iostream"
#include "string"
#include "cstdlib"

using namespace std;

int main(){

	struct personaje_1{
		string nombre_11;
		double ataque_11, vida_11;
	};
	struct personaje_2{
		string nombre_12;
		double ataque_12, vida_12;
	};
	
	string nombre_1, nombre_2;
	double ataque_1, ataque_2, vida_1, vida_2, vida_restante_1, vida_restante_2;
	
	cout << "Introduzca el nombre del primer personaje" << endl;
	cin >> nombre_1;
	
	cout << "Introduzca el ataque del primer personaje" << endl;
	cin >> ataque_1;
	
	cout << "Introduzca la vida del primer personaje" << endl;
	cin >> vida_1;
	
	cout << "Introduzca el nombre del segundo personaje" << endl;
	cin >> nombre_2;
	
	cout << "Introduzca el ataque del segundo personaje" << endl;
	cin >> ataque_2;
	
	cout << "Introduzca la vida del segundo personaje" << endl;
	cin >> vida_2;
	
	personaje_1 p1;
	p1.nombre_11 = nombre_1;
	p1.ataque_11 = ataque_1;
	p1.vida_11 = vida_1;
	
	personaje_2 p2;
	p2.nombre_12 = nombre_2;
	p2.ataque_12 = ataque_2;
	p2.vida_12 = vida_2;

	vida_restante_1 = p1.vida_11;
	vida_restante_2 = p2.vida_12;
	
	while ((vida_restante_1 > 0) && (vida_restante_2 > 0)){
		vida_restante_1 = vida_restante_1 - ataque_2;
		vida_restante_2 = vida_restante_2 - ataque_1;
	}
	 
	if (vida_restante_1 <= 0){
		cout << p2.nombre_12 << " Gana con una vida restante de: " << vida_restante_2 << endl;
		return 0;
	} else {
		cout << p1.nombre_11 << " Gana con una vida restante de: " << vida_restante_1 << endl;
		return 0;
	}
}
