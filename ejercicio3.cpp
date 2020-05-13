#include "iostream"
#include "cmath"

using namespace std;

int main(void)
{
    float a, b, c, x, y, z;

    cout << endl;
    cout << "PROGRAMA PARA RESOLVER ECUACIONES CUADRATICAS CON LA FORMULA GENERAL" << endl << endl;
    
    cout << "Introduzca el valor de a: ";
    cin >> a;
    cout << "Introduzca el valor de b: ";
    cin >> b;
    cout << "Introduzca el valor de c: ";
    cin >> c;

    x = pow(b,2)-4*(a*c);
    if (x < 0)
    
    {
        cout << "Esta ecuacion no tiene solucion en los numeros reales"; 
    }
    else
    {
        y = ((-b)+sqrt(x))/(2*a);
        z = ((-b)-sqrt(x))/(2*a);

    cout << "El resultado de y es: " << y << endl;
    cout << "El resultado de z es: " << z << endl;


 

    return 0;

    }
    
   

}