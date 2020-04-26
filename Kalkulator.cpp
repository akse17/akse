#include <iostream>

using namespace std;

int a,b,c;

int dodawanie()
{
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	a=a+b;
	cout << "Wynik twojego dodawania to: " << a << endl;
}
int odejmowanie()
{
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	a=a-b;
	cout << "Wynik twojego odejmowania to: " << a << endl;
}
int dzielenie()
{
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	a=a/b;
	cout << "Wynik twojego dzielenia to: " << a << endl;	
}
int mnozenie()
{
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	a=a*b;
	cout << "Wynik twojego mno¿enia to: " << a << endl;
}
int main() {
	setlocale(LC_CTYPE, "Polish");
	cout << "1. Dodawanie" << endl;
	cout << "2. Odejmowanie" << endl;
	cout << "3. Dzielenie" << endl;
	cout << "4. Mno¿enie" << endl;
	cout << "Twój wybór to: ";
	cin >> c;
	switch(c)
	{
		case 1:
			dodawanie();
		break;
		case 2:
			odejmowanie();
		break;
		case 3:
			dzielenie();
		break;
		case 4:
			mnozenie();
		break;
	}
	system("pause");
	return 0;
}
