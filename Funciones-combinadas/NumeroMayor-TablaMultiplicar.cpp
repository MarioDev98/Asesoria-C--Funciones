#include <iostream>

using namespace std;

// Funcion sin retorno de el numero mayor de 3 numeros 
void Numeros(){
    int x = 4;
    int y = 10;
    int z = 22;
    
    int numeromayor = x; //4
    
    if(y > numeromayor) //10 > 4 
    {
        numeromayor = y; //10
    }
    
    if (z > numeromayor) // 22 > 10
    {
    
        numeromayor = z; // 22
    }
    
    cout << "El numero mayor es: " << numeromayor <<endl; //22
    
}

//Funcion con retorno x tabla de multiplicar

int* tabla() {
    int numero = 2;
    int* tabla = new int[10]; 
    for (int i=0; i<10; i++) 
    {
      tabla[i]  = numero * (i + 1); 
    }
    
    return tabla;
    
}

int main()
{
    Numeros();
    
    cout << "\n########################################\n" << endl;
    
    int* tablas = tabla();
    
    cout << "La tabla del numero 2" << endl;
    for (int i =0; i<10; i++)
    {
        cout << " 2 x " << (i + 1) << " = "  << tablas[i] << endl;
    }
    
    delete[] tablas;
    return 0;
}