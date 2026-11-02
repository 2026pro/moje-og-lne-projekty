#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
	int zycia = 3;
	cout<<getpid()<<endl;
	cout<< &zycia<< endl;

	while(true)
	{
		cout<<zycia<<endl;
		sleep(10);
	}
	return 0;
}
