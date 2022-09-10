/*La calificacion final de un estudiante es la media ponderada de 3 notas:
1) practica 30%
2) teorica 60%
3) participacion 10%
Imprimir la nota estandar de su nota final*/
#include <iostream>
using namespace std;
int main()
{
    float practica, teorica, participacion, notaFinal = 0;
    cout << "Nota practica: " << endl;
    cin >> practica;
    cout << "Nota teorica: " << endl;
    cin >> teorica;
    cout << "Nota participacion: " << endl;
    cin >> participacion;
    practica *= 0.30;
    teorica *= 0.60;
    participacion *= 0.10;
    notaFinal = practica + teorica + participacion;
    cout << "La nota final es:" << notaFinal << endl;
}