#include <iostream>
using namespace std;

int main() {
  int arr[34];
  int count = 0;

  // Llenar el array con los números comprendidos entre 0 y 100 divisibles por 3
  for (int i = 0; i <= 100; i += 3) {
    arr[count] = i;
    count++;
  }

  // Mostrar el contenido del array
  cout << "Los números divisibles por 3 entre 0 y 100 son: " << endl;
  for (int i = 0; i < 34; i++) {
    cout << arr[i] << " ";
  }
}



