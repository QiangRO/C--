/*Pedir 3 notas y sacar promedio de alumno */
#include<iostream>

using namespace std;

int main()
{
    float not1, not2, not3, prom=0;
    cout<<"Ingrese nota 1:"<<endl; cin>> not1;
    cout<<"Ingrese nota 2:"<<endl; cin>> not2;
    cout<<"Ingrese nota 3:"<<endl; cin>> not3;
    prom = (not1+not2+not3)/3;
    cout.precision(3);
    cout<<"El promedio de notas es: "<<prom<<endl;
}