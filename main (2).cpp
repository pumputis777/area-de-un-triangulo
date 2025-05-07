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

    cout << "este programa va a calcular el area de un triangulo" <<endl; //le indica al usuario lo que hace el programa
    cout << "Ingrese la base del triángulo: "; //solicito al usuario que ingrese la base del triangulo 
    cin >> base; // guarda el valor que ingreso el usuario en la variable base
    cout << "Ingrese la altura del triángulo: "; //solicito al usuario que ingrese la altura del triangulo
    cin >> altura; //guarda el valor que ingreso el usuario en la variable altura

    area = (base * altura) / 2;  // Calcula el área del triángulo multiplicando base por altura dividido 2 y guarda el resultado en la variable area

    cout << "El área del triángulo es: " << area << endl; // Muestra el valor de la variable area


    return 0;
}
