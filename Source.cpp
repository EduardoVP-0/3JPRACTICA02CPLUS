//PRACTICA 02
//EDUARDO VELAZQUEZ

#include<iostream>
#include<conio.h>

using namespace std;
const int NUM = 8;
int main() {

	int nums[NUM], total = 0, i;


	for (i = 0; i < NUM; i++) {

		cout << "Introduzca un numero: ";
		cin >> nums[i];
		total += nums[i];
	}
	cout << "El total de la suma de numeros es: " << total << endl;

	system("PAUSE");
	return 0;
}