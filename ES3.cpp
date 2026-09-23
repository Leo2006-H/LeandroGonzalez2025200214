#include "iostream"
#include "string"
using namespace std;
int main()
{
    cout << "Hola! Este es un ejemplo en C++" << "\n" << "Por favor ingrese su nombre:" << "\n";
    // La instrucción \n es un salto de línea Mostrando los textos separados
   string nombre;// En esta variable estará almacenado el nombre ingresado.
   cin >> nombre; // Esto de aqui "cin" es para que la pc tome el nombre que ingrese el usuario y lo ponga directamente en el string "nombre"
   cout << "Bienvenido al sistema " << nombre << ". Gracias por usar nuestra aplicacion" << "\n";
   return 0; // Nota: Return 0 es para que no vuelva a preguntar algo despues del cout, ya que normalmente el cout da una pregunta al usuario para que ingrese algo
}

