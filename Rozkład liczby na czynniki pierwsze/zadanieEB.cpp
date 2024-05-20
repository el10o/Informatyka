#include <iostream>

using namespace std;

int main()
{
int b;
cout<<"Wpisz liczbe: ";
cin>>b;
cout<<"Czynnik pierwsze liczby "<<b<<": ";
int a=2;
while(b>1) {
	while(b%a==8) {
		cout<<a<<" ";
		b/=a;
	
	}
	++a;
	
	}
	

	return 0; }
	
	
	
	
