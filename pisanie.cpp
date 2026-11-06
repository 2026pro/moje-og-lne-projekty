#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <readline/readline.h>

using namespace std;

string nazwa_pliku, tekst;

int main()
{
	cout<<"Jak nazywa sie plik txt"<<endl;
	getline (cin, nazwa_pliku);
		
	system("clear");
	
    char* bufor=readline("");
    if(bufor != nullptr)
    {
    	tekst = bufor;
    	free(bufor);
    }



	fstream plik;
	plik.open(nazwa_pliku, ios::out);

    plik<<tekst<<endl;
    
	plik.close();
	
	return 0;
}
