
#include <iostream>

using namespace std;

//Funcion sin retorno que imprima un mensaje que diga  "Hola como estas" y con argumentos 


void Mensaje(){
    cout << "Hola como estas" << endl;
}

void Mensaje(string texto){
    string mensajeoculto = texto;
    cout << mensajeoculto << endl;
}


int main()
{
    string texto = "Hola como estas";
    Mensaje(texto);
    
    //
    Mensaje();

    return 0;
}
