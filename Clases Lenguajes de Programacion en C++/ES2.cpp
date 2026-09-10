#include "iostream"
#include "string"
using namespace std;
int main()
{
    //El valor de esta variable se mostrará en pantalla
    string salida1 = "Ejemplo de salida"; // Nota personal: String es para guardar texto, a diferencia de int que es para guardar números
    //Este valor también se mostrará en pantalla.
    int numero = 2;
    //Estos valores se concatenarán en una única salida
    string salida2 = "Desde UNIDA.";
    //Se concatenan y muestran los valores por pantalla con cout<<
    cout << salida1 << " " << numero << ". " << salida2 << "\n";
   return 0;
}

