/*Escribir un fragmento de programa que intercambie los valores
de dos variables*/
#include <iostream>
using namespace std;
int main()
{
    int x, y, aux = 0;
    cout << "Digite el valor de x" << endl;
    cin >> x;
    cout << "Digite el valor de y" << endl;
    cin >> y;

    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl<<endl;
    /*
    x = 10
    y = 5*/
    //Intercambio de valores
    aux = x; // aux = 10
    x = y;   // x = 5
    y = aux; // y = 10
    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
    return 0;
}