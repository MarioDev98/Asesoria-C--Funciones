#include <iostream>
using namespace std;

//funcion sin retorno con argumento que imprima un numero entero y un mensaje que diga "Hola "
 
//Primera forma
void NumeroConMensaje(int numero, string mensaje)
{
    cout << "El numero es: " << numero << " y el mesaje dice: " << mensaje << endl; //se imprimen los argumentos numero y mensaje
}

//Segunda forma
void NumeroConMensaje2(int numero2, string mensaje2)
{
    cout << "El numero que se ingreso fue: " << numero2 << " y el mensaje dice : " << mensaje2 << endl; // se imprimen los argumentos numero2 y mensaje2
}
  
int main () 
{
    //primera forma
    cout << "############ PRIMERA FORMA ##############\n" << endl;
    
    string mensaje = "Hola"; // se define el mensaje en la variable mensaje
    int numero = 10;  // se define el numero en la variable numero
    
    NumeroConMensaje(numero,mensaje); // se manda a traer la función
    
    //segunda forma
    cout << "\n############ PRIMERA FORMA ##############\n" << endl;
    string mensaje2; // se define la variable mensaje2
    int numero2; // se define la variable numero2
    
    cout << "Ingresa un numero entero: " ; //se solicita el numero
    cin >> numero2; // se guarda el valor del numeor en la variale numero2
    
    cout << "\nIngresa la palabra que se solicita: "; // se solicita el mensaje
    cin >> mensaje2; // se guarda el mensaje en la variable mensaje2
    
    NumeroConMensaje2(numero2,mensaje2); // se manda a traer la función
    return 0;
}
