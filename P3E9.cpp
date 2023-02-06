#include <iostream>
using namespace std;

//________________ Atributos______________________
const int N = 3;

//________________ Funciones______________________
void llenarMatriz(int mat[][N], int filas, int columnas) {
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      cout << "Introduce el valor para la posición [" << i+1 << "][" << j+1 << "]: ";
      cin >> mat[i][j];
    }
  }
}

void sumarMatrices(int a[][N], int b[][N], int c[][N], int filas, int columnas) {
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      c[i][j] = a[i][j] + b[i][j];
    }
  }
}

void restarMatrices(int a[][N], int b[][N], int c[][N], int filas, int columnas) {
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      c[i][j] = a[i][j] - b[i][j];
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

void trasponerMatriz(int a[][N], int c[][N], int filas, int columnas) {
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      c[j][i] = a[i][j];
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
void esPuntoDeSilla(int mat[][N],int filas, int columnas) {
  int minFila=mat[0][0];
  int maxColumna;
  
  int fila;
  int columna;
  
   for (int i = 0; i < filas; i++) {
    int aux = 0;
    int k = 0;
    for (int j = 0; j < columnas-1; j++) {
      if (mat[i][k] > mat[i][j+1]) {
      minFila = mat[i][j+1];
      k = j+1;
      }
    }
    for (int n = 0; n < filas; n++) {
      if (mat[i][k] < mat[n][k]) {
        n = filas;
        aux = 1;
      }      
    }
    if (aux < 1){
       cout << "Hay un punto silla en el elemento:[" << i+1 << "][" << k+1 << "]";     
    }      
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
  
  //________________ Operaciones______________________
  // Sumar las dos matrices
  sumarMatrices(a, b, c, N, N);
  cout << "Matriz resultante de sumar:" << endl;
  mostrarMatriz(c, N, N);
  
  // Restar las dos matrices
  restarMatrices(a, b, c, N, N);
  cout << "Matriz resultante de restar:" << endl;
  mostrarMatriz(c, N, N);

  // Multiplicar las dos matrices
  multiplicarMatrices(a, b, c, N, N);
  cout << "Matriz resultante de multiplicar:" << endl;
  mostrarMatriz(c, N, N);

  // Transponer una Matriz
  trasponerMatriz(a, c, N, N);
  cout << "Matriz resultante de trasponer:" << endl;
  mostrarMatriz(c, N, N);

  // Punto silla
  cout << "Dada la matriz:" << endl;
  mostrarMatriz(a, N, N);
  esPuntoDeSilla(a, N, N);  
}