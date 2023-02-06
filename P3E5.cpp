#include <iostream>
using namespace std;

//enum Monedas { UN_CENTIMO, DOS_CENTIMOS, CINCO_CENTIMOS, DIEZ_CENTIMOS, VEINTE_CENTIMOS, MEDIO_EURO, UN_EURO, DOS_EUROS };
const double valor[] = {0.01, 0.02, 0.05, 0.1, 0.2, 0.5, 1, 2};

int main() {
  int bolsillo[8];
  double total = 0;

  // Inicializar el contenido del bolsillo
  bolsillo[0] = 35;
  bolsillo[1] = 4;
  bolsillo[2] = 2;
  bolsillo[3] = 0;
  bolsillo[4] = 5;
  bolsillo[5] = 1;
  bolsillo[6] = 3;
  bolsillo[7] = 4;

  // Calcular el valor total del bolsillo
  for (int i = 0; i < 8; i++) {
    total += bolsillo[i] * valor[i];
  }

  // Mostrar el contenido del bolsillo y su valor total
  cout << "Contenido del bolsillo:" << endl;
  cout << bolsillo[0] << " monedas de 1 céntimo" << endl;
  cout << bolsillo[1] << " monedas de 2 céntimos" << endl;
  cout << bolsillo[2] << " monedas de 5 céntimos" << endl;
  cout << bolsillo[3] << " monedas de 10 céntimos" << endl;
  cout << bolsillo[4] << " monedas de 20 céntimos" << endl;
  cout << bolsillo[5] << " monedas de medio euro" << endl;
  cout << bolsillo[6] << " monedas de 1 euro" << endl;
  cout << bolsillo[7] << " monedas de 2 euros" << endl;
  cout << "Valor total: " << total << " euros" << endl;
}