#include <iostream>
using namespace std;
int main() 
{
    int n = 3; 
    int *wsk; 

    wsk = &n; 

   
    cout << "Zawartosc wskaznika wsk: " << *wsk << endl;
    cout << "Adres zmiennej n: " << &wsk << endl;
	cout << "Adres zmiennej n: " << &wsk << endl;
   
    return 0;
}