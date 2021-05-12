#include<iostream>
#include<string>

using namespace std;

inline int sprawdz(char znak)
{
	//mala litera
	if (znak >= 'a' && znak <= 'z') return 0;
	//duza litera
	if (znak >= 'A' && znak <= 'Z') return 1;
	//inny znak
	return 2;
}

void szyfrowanie(int offset, string& tab)
{
	//sprawdzenie poprawnoœci zakresu offsetu
	if (!(offset >= -25 && offset <= 25)) return;

	int pom;
	char a, z;

	for (int i = 0; i < tab.size(); i++)
	{
		pom = sprawdz(tab[i]);
		//ustalenie wielkosci litery
		if (pom < 2)
		{
			if (pom == 0)
				a = 'a', z = 'z';
			else
				a = 'A', z = 'Z';

			if (offset >= 0)

				if (tab[i] + offset <= z)
					tab[i] += offset;
				else
					tab[i] = tab[i] + offset - 26;
			else
				if (tab[i] + offset >= a)
					tab[i] += offset;
				else
					tab[i] = tab[i] + offset + 26;
		}
	}
}

int main()
{
	string tab;

	int offset;

	cout << "Podaj tekst do zaszyfrowania: ";
	getline(cin, tab);

	cout << "Podaj offset z przedzialu <-25,25>: ";
	cin >> offset;

	szyfrowanie(offset, tab); //szyfrowanie

	cout << "Zaszyfrowany tekst: " << tab << endl;

	return 0;
}