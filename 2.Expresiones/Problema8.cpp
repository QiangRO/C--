/* Programa que lea los dos catetos de un triangulo rectangulo
y escriba en la salida la hipotenusa*/

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float catetoOpuesto, catetoAdyacente, hipotenusa = 0;
    cout << "Cateto Opuesto:" << endl;
    cin >> catetoOpuesto;
    cout << "Cateto Adyacente:" << endl;
    cin >> catetoAdyacente;
    hipotenusa = sqrt(pow(catetoOpuesto, 2) + pow(catetoAdyacente, 2));
    cout << "La hipotenusa es: " << hipotenusa << endl;
}