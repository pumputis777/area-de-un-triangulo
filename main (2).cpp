/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
 float base; //declaro la primera variable de tipo float 
 float altura; //declaro la segunda variable de tipo float 
 float area; //declaro la tercera variable de tipo float 

    cout << "Ingrese la base del triángulo: "; //solicito al usuario que ingrese la base del triangulo 
    cin >> base; // guarda el valor que ingreso el usuario en la variable base

    cout << "Ingrese la altura del triángulo: "; //solicito al usuario que ingrese la altura del triangulo
    cin >> altura; //guarda el valor que ingreso el usuario en la variable altura

    area = (base * altura) / 2;  // Calcula el área del triángulo multiplicando base por altura 

    // Mostrar el resultado
    cout << "El área del triángulo es: " << area << endl;


    return 0;
}