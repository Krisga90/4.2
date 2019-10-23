#include <iostream>
#include <string>

int main()
{
	using namespace std;
	//const int Size = 20;
	//char imie[Size];
	//char deser[Size];
	string imie;
	string deser;

	cout << "Jak sie nazywasz?\n";
	//cin.getline(imie, Size);
	getline(cin, imie);
	cout << "Jak nazywa sie twoj ulubiony deser?\n";
	//cin.getline(deser, Size);
	getline(cin, deser);
	cout << imie << " mam dla ciebie " << deser;

	cin.get();
	//cin.get();

	return 0;
}