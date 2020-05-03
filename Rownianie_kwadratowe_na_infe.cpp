#include <iostream>
#include <cmath>

using namespace std;

int a, b, c, x[3], pom, delta,d;

//Obliczanie delty
int ob_delta()
{
	d=4*a*c;
	delta=pow(b,2)-d;
}
//Obliczanie X
int ob_x()
{
	if(delta==0)
	{
		x[0]=-b/(2*a);
		cout << "x = " <<x[0] << endl;
	}
	else
	{
		pom=c/a;
		if(b>0)
		{
			x[1]=(-b-sqrt(delta))/(2*a);
			x[2]=pom/x[1];
		}
		else
		{
			x[2]=(-b+sqrt(delta))/(2*a);
			x[1]=pom/x[2];
		}
		cout << "x[1] = " << x[1] << ", x[2] = " << x[2] << endl;
	}
}

int main()
{
	setlocale(LC_CTYPE, "Polish");
	cout << "Konrad WoŸniak II TD nr 28" << endl;
	//Wczytanie wartoœci a, b, c
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	cout << "Podaj c: ";
	cin >> c;
	if(a==0)
	{
		cout << "To nie jest równanie kwadratowe" << endl;
	}
	//Obliczenia
	else
	{
		ob_delta();
		if(delta<0)
		{
			cout << "Równanie nie ma pierwiastków poniewa¿ delta=("<<delta <<")"<< endl;
		}
		else
		{
			ob_x();
		}
	}
	system("pause");
	return 0;
}
