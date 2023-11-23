  #include <iostream>
using namespace std;

int main(){
	short a = 30;
	while( a >=10 ){
		cout << a << ", ";
		a -= 2;
	}
	cout << endl;
	
	short b;
	cout << "podaj liczbe";
	cin >> b;
	do{
		cout << b << ", ";
		b /= 2;
	}while(b > 0);
}