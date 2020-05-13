#include "iostream"
#include "string"

using namespace std;

int main(void)
{
    float precio, cantidad, total;
    string producto;
    
    cout << endl;
    cout << "PROGRAMA QUE VERIFICA EL PRODUCTO COMPRADO " << endl << endl;

    cout << "Ingresar el nombre del producto: ";
    cin >> producto;

    cout << "Ingresar el precio del producto: ";
    cin >> precio;

    cout << "Ingresar la cantidad del producto que compro: ";
    cin >> cantidad;

    total = cantidad * precio;

    cout << "Total: " << total << endl;

    cout << endl;

    return 0;

}