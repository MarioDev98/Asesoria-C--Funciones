#include <iostream>
using namespace std;

//funcion con retorno y sin argumentos que pida 3 calificaciones y muestre su promedio


//primera forma
float Promedio()
{
    float num1,num2,num3,resultado,suma; // se definen las variables
    cout << "Ingrese la primera calificación: "; // se solicita el dato 
    cin >> num1; // se guarda el valor en la variable
    cout << "Ingrese la segunda calificación: ";
    cin >> num2;
    cout << "Ingrese la tercera calificación: ";
    cin >> num3;
    suma = num1 + num2 + num3; // se hace una suma de las 3 variables y se guarda en una variable llamada suma
    resultado = suma / 3; // se divide el valor de la varianle suma entre 3 y el resultado se guarda en la variable resultado
    // resultado = (num1 + num2 + num3) / 3;  
    return resultado;    // se retorna el resultado
}

//Segunda forma con un ciclo for
float Promedio2() {
    float calificacion, suma = 0; // se declaran las variables

    for (int i = 0; i < 3; i++) { // se hace un ciclo for para 3 ciclos
        cout << "Ingrese la calificacion " << i+1 << ": "; // se solicita numero y se indica en cual ciclo va
        cin >> calificacion; // se guarda el valor ingresado en la variable calificacion
        suma += calificacion; // la variable suma va a ir guardando la suma de las calificacion ingresadas en cada ciclo
        
    }

    return suma / 3; // se retorna el resultado de la suma divido entre 3
    
}


int main () 
{
    // primera forma
    cout << "################## PRIMERA FORMA #######################\n" << endl;
    float promediofinal = Promedio();  
    cout << "\nEl promedio final es: " << promediofinal << endl;
    
    //segunda forma
    cout << "\n################## SEGUNDA FORMA #######################\n" << endl;
    float prom = Promedio();
    cout << "\nEl promedio de las calificaciones es: " << prom << endl;
    return 0;
}
