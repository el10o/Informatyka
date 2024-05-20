#include <iostream>
using namespace std;

long long suma(int n);

int main()
{
    int n;
	
	cout << "Podaj liczbe: ";
	cin >> n;
	
	cout << "Suma " << suma(n) << endl;

	return 0;
}

long long suma(int n){
	if(n<1) 
		return 0;
	
	return n+suma(n-1);
}