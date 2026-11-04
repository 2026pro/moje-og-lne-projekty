#include <iostream>

using namespace std;

int main()
{
	int wskaznik = 100;
	int* numer = &wskaznik;

	cout<<"Liczba to "<<wskaznik<<"."<<endl;
	cout<<"A adres pamienci liczby to "<<numer<<"."<<endl;
	return 0;
}
