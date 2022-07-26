#include <iostream>
#include <vector>


using namespace std;


void balance(int cantidad, int core, int cantidadCores) {

	int sumaTotal;
	int* a = new int(cantidad);

	int pos = cantidad / cantidadCores;


	//lenar el arreglo con los numeros
	for (int i = 0; i < cantidad; i++)
	{
		a[i] = i;
	}

	while (pos != cantidad) {
		


		



	}


	for (int y = 0; y < cantidad; y++)
	{
		cout << " " << a[y];
	}

}

int main() {

	balance(24, 2, 8);
}
