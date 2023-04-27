
#include <iostream>

using namespace std;

//Resta de dos numeros decimales con metodo de retorno y argumentos

float Suma(float a, float b){
    float resultado = a - b;
    return resultado;
}



int main()
{
    float numero1 = 120;
    float numero2 = 2;
    // Suma(numero1,numero2);
    
    cout << "la suma es: " << Suma(numero1,numero2) << endl;
    
    return 0;
}
