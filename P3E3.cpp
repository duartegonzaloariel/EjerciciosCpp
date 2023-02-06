#include <iostream>//Directiva. Permite agregar biblioteca iostream 
using namespace std;//Usamos el espacio de nombre std

int main() {
    int n;
    cout << "Ingrese el número N: ";//Console out
    cin >> n;//Console in

    int i = 1;
    while (i * i * i <= n) {
        i++;
    }

    cout << "El primer número natural cuyo cubo es mayor que " << n << " es " << i << endl;//endl:Salto de linea
    cout << "La secuencia de números recorrida es:" << endl;
    for (int j = 1; j < i; j++) {
        cout << j << "------>" << j*j*j << endl;
    }
}