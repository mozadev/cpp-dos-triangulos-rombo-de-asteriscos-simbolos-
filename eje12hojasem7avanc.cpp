#include <iostream>
#include <conio.h>
using namespace std;

int ingresen()
{
	int n;
	cout << "ingrese n"; cin >> n;
	while (n <= 0||n>=10)
	{
		cout << "ingrese n:"; cin >> n;
	}
	return n;
}

void grafica(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int e = 26; e >= 1; e--)
			cout << " ";
		for (int j = 1; j <= i; j++)
			if (j == 1 || i == n || i == j)
				cout << "*";
			else cout << " ";

			cout << "\n";
	}
	
	for (int i = n; i >=1; i--)
	{
				for (int e = 26; e >= 1; e--)
					cout << " ";
				for (int j = 1; j<=i; j++)
					if (j == 1 || i == n || i == j)
						cout << "*";
					else cout << " ";
					cout << "\n";
	}
}
int main()
{
	int n = ingresen();
	grafica(n);
	_getch();
}

