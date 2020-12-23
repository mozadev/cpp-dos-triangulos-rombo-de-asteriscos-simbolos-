/*Realice una aplicación en C++ que solicite el ingreso de dos números
enteros, positivos y menores
a 10 (N)y muestre, al centro de la pantalla, la siguiente figura.
Ejemplo: Ingrese N : 5*/


#include<iostream>
#include<conio.h>

using namespace std;

int ingresenumero()
{
	int n;
	cout << "ingrese numero"; cin >> n;
	while (n <= 0 || n >= 10)
	{
		cout << "ingrese numero"; cin >> n;
	}
	return n;
}

void grafica(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			if (i == n || j == 1 || j == i)
				cout << j;
			else cout << " ";

			cout << endl;
	}

	for (int k = 1; k <= n - 1; k++)
	{
		for (int l = 1; l <= n; l++)
			if (l == k  || l == n)
				cout << l;
			else cout << " ";

			cout << endl;
	}


}


int main()
{
	int m = ingresenumero();
	grafica(m);
	_getch();

}