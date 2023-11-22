 #include <iostream>
using namespace std;

int main(){
	
	//while(warunek-zakonczenie(true))
	short a = 30;
	while(a <= 30){
		cout << a << ", ";
		a += 1;
	}
	short liczba;
	do{
		cout <<"Podaj liczbe: ";
		cin >> liczba;
	}while(liczba ==5);
	
	
	
	cout <<endl;
	system("pause");
}