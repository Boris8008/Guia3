#include "iostream"

using namespace std;

int main(void)
{
    int c1, c2, c3;
    int promedio;
    int num4 = 3;

    cout << endl;
    cout << "PROGRAMA PARA CALCULAR PROMEDIO EN ENTEROS" << endl << endl;

    cout << "Ingrese la calificacion 1: ";
    cin >> c1;

    cout << "Ingrese la calificacion 2: ";
    cin >> c2;

    cout << "Ingrese la calificacion 3: ";
    cin >> c3;

    cout << endl;

    int suma = c1 + c2 + c3;
    int div = suma / num4;

    cout << "El promedio es: " << div << endl; 

    return 0;


}