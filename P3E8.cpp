#include <iostream>
using namespace std;

//________________Atributos_______________________
const int N = 2;

//________________Funciones_______________________
void llenarMatriz(int mat[][N], int filas, int columnas) {
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      cout << "Introduce el valor para la posición [" << i+1 << "][" << j+1 << "]: ";
      cin >> mat[i][j];
    }
  }
}
void multiplicarMatrices(int a[][N], int b[][N], int c[][N], int filas, int columnas) {
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      c[i][j] = 0;
      for (int k = 0; k < columnas; k++) {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }
}
void mostrarMatriz(int mat[][N], int filas, int columnas) {
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }
}

//________________ Metodo Main______________________
int main() {
  int a[N][N];
  int b[N][N];
  int c[N][N];

  // Pedir al usuario que introduzca los valores para la primera matriz
  cout << "Introduce los valores para la primera matriz:" << endl;
  llenarMatriz(a, N, N);

  // Pedir al usuario que introduzca los valores para la segunda matriz
  cout << "Introduce los valores para la segunda matriz:" << endl;
  llenarMatriz(b, N, N);

  // Multiplicar las dos matrices
  multiplicarMatrices(a, b, c, N, N);

  // Mostrar la matriz resultante
  cout << "Matriz resultante:" << endl;
  mostrarMatriz(c, N, N);
}