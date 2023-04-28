#include <iostream>
using namespace std;

//Funcion con retorno y argumento que imprima un numero entero

//Primera forma de hacerlo
int RegresaNumeroF1(int numero)
{
    int num = numero; //variable num que guarda el valor del argumento numero
    return num; //retorno de valor de variable num
}

//Segunda forma de hacerlo
int RegresaNumeroF2(int numero2)
{
    return numero2; //retornamos el valor del argumento numero2
}

//Tercera formad de hacerlo
int RegresaNumeroF3(int numero3)
{
    return numero3; //retornamos el valor del argumento numero3
}

int main()
{
    //primera forma
    cout << "################### PRIMERA FORMA #####################\n" << endl;
    int numero = 10; // definimos numero 
    cout << "El numero es: " << RegresaNumeroF1(numero) << endl; // se imprime el numero
    
    // segunda forma
    cout << "\n################### SEGUNDA FORMA #####################\n" << endl;
    int numero2 = 11; //definimos numero 
    cout << "El numero es: " << RegresaNumeroF2(numero2) << endl; //se imprime el numero
    
    //Tercera forma
    cout << "\n################### TERCER FORMA #####################\n" << endl;
    int numero3; // definimos la variable
    cout << "Ingresa un numero entero: "; //pedimos la variable con un mensaje
    cin >> numero3; // guardamos la variable
    cout << "\nEl numero es: " << RegresaNumeroF3(numero3) << endl; //se imprime el numero
    
    
    return 0;
}