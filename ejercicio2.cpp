#include "iostream"
#include "cmath"

using namespace std;

int main(void)
{
    float radio, area, longitud; 

    cout << endl;
    cout << "PROGRAMA PARA CALCULAR AREA Y PERIMETRO DE UN CIRCULO INGRESANDO SU RADIO" << endl << endl;

    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    area = 3.14 * pow(radio,2);
    longitud = 2 * 3.14 * radio;

    cout << "El area del circulo es: " << area <<endl;
    cout << "La longitud de circunferencia del circulo es: " << longitud << endl << endl;

    return 0;

}