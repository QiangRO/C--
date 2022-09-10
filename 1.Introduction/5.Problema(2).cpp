/*Escribir un programa que lea de la entrada estandar
el precio y muestre en la salida estandar el precio
del producto al aplicarle IVA*/
#include <iostream>
using namespace std;

int main()
{
    int precioProduct = 0, iva = 0;
    cout << "Ingrese el precio de un producto" << endl;
    cin >> precioProduct;
    iva = precioProduct + (precioProduct * 0.15);
    cout << "El precio final con IVA es de: " << iva << " BS."<<endl;
}