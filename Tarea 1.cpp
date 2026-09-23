#include "iostream"
#include "string"

using namespace std;

int main ()
{
	cout << "Hola! Este es un ejemplo en C++" << "\n" << "Por favor ingrese su nombre:" << "\n";
    // La instrucción \n es un salto de línea Mostrando los textos separados
   string nombre;// En esta variable estará almacenado el nombre ingresado.
   cin >> nombre; // Esto de aqui "cin" es para que la pc tome el nombre que ingrese el usuario y lo ponga directamente en el string "nombre"
   cout << "Bien, ahora escriba su primer apellido por favor:" << "\n";
   string apellido;
   cin >> apellido;
   cout << "Por ultimo detalle su edad:" << "\n";
   string edad;
   cin >> edad;
   cout << "Bienvenido al sistema " << nombre << " " << apellido << " " << "de edad:" << " " << edad << ". Gracias por usar nuestra aplicacion" << "\n";
   return 0;
}


