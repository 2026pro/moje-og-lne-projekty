#include <iostream>

using namespace std;

int wskaznik;
int* numer = &wskaznik;

int main()
{
	cout<<"Witaj. Podaj liczbe a ja schowam ja pod adres pamieci "<<numer<<endl;
	cin>>wskaznik;
	cout<<"Dzieki teraz masz schowana liczbe "<<wskaznik<<" i masz do niej adres pamieci"<<endl;
	return 0;
}
