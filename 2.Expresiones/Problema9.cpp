#include <iostream>
#include<math.h>

using namespace std;
int main()
{
    float x, y, resultado = 0;
    cout << "Valor de x: " << endl;
    cin >> x;
    cout << "Valor de y: " << endl;
    cin >> y;
    resultado = (sqrt(x)) / (pow(y, 2) - 1);
    cout.precision(3);
    cout << "El resultado de la funcion es: " << resultado << endl;
}