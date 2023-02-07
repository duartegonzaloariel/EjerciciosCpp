#include <iostream>
using namespace std;
/*
Escribe un programa que lea un número entero positivo del teclado y
muestre la suma de sus dígitos. 
El programa usará una función que calcule la suma de los dígitos de un entero.

No hay que hacer esto. Es solo un comentario [Por ejemplo, si el entero es 932, mostrará 14 (9 + 3 + 2)]

*/

int sumaDigitos(int num){
    int suma = 0;
    while (num > 0){
        //suma += num % 10;
        suma = suma + num % 10;
        num /= 10;
    }
    return suma;
}

int  main(){
    int numero;
    cout << " Ingrese número entero positivo ";
    cin >> numero;
    cout << "La suma es " << sumaDigitos(numero) << endl;
    return 0;
}