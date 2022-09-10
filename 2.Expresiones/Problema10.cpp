/* Escribir un problema que calcule las coluciones de una ecuacion de segundo grado
de la fomra ax^2+bx+c=0*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, resultado1, resultado2;
    cout << "Valor de a: " << endl;
    cin >> a;
    cout << "Valor de b: " << endl;
    cin >> b;
    cout << "Valor de c: " << endl;
    cin >> c;

    resultado1 = (-b + (sqrt(pow(b, 2) - 4 * a * c))) / 2 * a;
    resultado2 = (-b - (sqrt(pow(b, 2) - 4 * a * c))) / 2 * a;

    cout << "El resultado 1 es: " << resultado1 << endl;
    cout << "El resultado 2 es: " << resultado2 << endl;
}