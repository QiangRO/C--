/*Realice un programa que lea de la entrada estandar los datos:
1. Edad
2. Sexo
3. Altura
Y mostrarlos por salida estandar*/
#include <iostream>

using namespace std;
int main()
{
    int edad = 0;
    char sexo[10];
    float altura = 0.00;
    cout << "Ingrese su edad" << endl;
    cin >> edad;
    cout << "Ingrese su sexo" << endl;
    cin >> sexo;
    cout << "Ingrese su altura(cm)" << endl;
    cin >> altura;

    cout<< "Sus datos ingresados son: \n"
        << edad << "\n"
        << sexo << "\n"
        << altura << "cm." << endl;
}
