#include <iostream>

using namespace std;

void pies()
{
	cout<<"Ja tez lubię psy."<<endl;
}
void kot()
{
	cout<<"Ja tez lubię koty."<<endl;
}
int main()
{
	int wybor;

	cout<<"Co lubisz kota czy psa"<<endl;
	cout<<"1. pies"<<endl;
	cout<<"2. kot"<<endl;
	cin>>wybor;

	if(wybor==1)
	{
		pies();
	}
	if(wybor==2)
	{
	    kot();
	}
	return 0;
}
