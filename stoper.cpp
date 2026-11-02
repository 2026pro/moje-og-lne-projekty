#include <iostream>
#include <unistd.h>
#include <cstdlib>

using namespace std;

int main()
{
	int czas = 1;

	while(true)
	{
		cout<< czas++ <<endl;
		sleep(1);
		system("clear");
	}
	return 0;
}
