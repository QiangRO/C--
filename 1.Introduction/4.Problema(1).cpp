/*Pedir por consola 2 numeros enteros y realizar operaciones
suma, resta, multiplicacion y division*/
#include <iostream>

using namespace std;

int main()
{
    // Variables
    int n1 = 0, n2 = 0, suma = 0, rest = 0, mult = 0, div = 0;
    // double div = 0.00;
    //  Imprimimos la introduccion de 2 numeros
    cout << "Introduce un numeros:" << endl;
    cin >> n1;
    cout << "Introduce otro numeros:" << endl;
    cin >> n2;
    // Realizamos las operaciones
    suma = n1 + n2;
    rest = n1 - n2;
    mult = n1 * n2;
    div = n1 / n2;
    // Imprimimos los resultados
    cout << "\nSuma =" << suma << endl;
    cout << "\nResta = " << rest << endl;
    cout << "\nMultiplicacion = " << mult << endl;
    cout << "\nDivision = " << div << endl;
    return 0;
}