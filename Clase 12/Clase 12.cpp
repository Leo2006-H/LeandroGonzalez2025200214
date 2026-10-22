//Struct, ya veremos
#include "iostream"
#include "string"

using namespace std;

//Creacion de un codigo que permita tener 2 personajes y basandose en sus puntos de fuerza saber cual ganaria
int main(){
	
	struct Personaje_1{ //Lo que hace struct es crear un personaje o cosa con ciertas caracteristicas elegidas por el programador
		string nombre_1;
		double ataque_1;
	};
	struct Personaje_2{
		string nombre_2;
		double ataque_2;
	};
	
	string nombre_3, nombre_4;
	double ataque_3, ataque_4;
	
	cout << "Nombre del primer personaje: " << endl;
	cin >> nombre_3;
	cout << "Ataque del primer personaje: " << endl;
	cin >> ataque_3;
	
	cout << "Nombre del segundo personaje: " << endl;
	cin >> nombre_4;
	cout << "Ataque del segundo personaje: " << endl;
	cin >> ataque_4;
	
	Personaje_1	p1; //Esto asigna a "p1" los valores del personaje 1
	
	p1.nombre_1 = nombre_3; //Se escribe p1.nombre_1 para que el nombre_1 que antes se asigno al personaje 1 adquiera un valor
	p1.ataque_1 = ataque_3;
	
	Personaje_2 p2;
	
	p2.nombre_2 = nombre_4; //Lo mismo de arriba pero con el personaje 2
	p2.ataque_2 = ataque_4;
	
	if (p1.ataque_1 > p2.ataque_2){ //Un if para saber quien gana
		cout << p1.nombre_1 << " gana con una diferencia de: " << p1.ataque_1 - p2.ataque_2 << " a " << p2.nombre_2 << endl;
		return 0;
	} else if (p1.ataque_1 < p2.ataque_2){
		cout << p2.nombre_2 << " gana con una diferencia de: " << p2.ataque_2 - p1.ataque_1 << " a " << p1.nombre_1 << endl;
		return 0;
	} else {
		cout << "Empate" << endl;
		return 0;
	}
	
	 
}
