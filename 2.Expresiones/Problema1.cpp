#include <iostream>

using namespace std;

int main()
{
    float a, b, result = 0;
    cout << "Digite el valor de a" << endl;
    cin >> a;
    cout << "Digite el valor de b" << endl;
    cin >> b;
    result = (a / b) + 1;
    cout.precision(2);
    cout<< "El resultado es: "<<result<<endl;
    return 0;
}