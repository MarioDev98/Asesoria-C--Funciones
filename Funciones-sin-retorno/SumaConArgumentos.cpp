#include <iostream>
using namespace std;

void Suma(float a, float b){
    float resultado = a + b;
    cout << "la suma es : " << resultado << endl;
}


int main()
{
    float numero1=10.9;
    float numero2=3.5;
    
    Suma(numero1,numero2);
    
    
    return 0;
}
