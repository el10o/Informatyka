#include <iostream>
 
using namespace std;
 
int main()
{
    int tab[25] ={2, 4, 5, 9, 15, 28, 4, 8, 9,11, 45,7, 41, 43, 47, 2, 11,2, 8, 4, 41,6, 41,6};
    int liczby[25];
    short szukana;
    short index = 0;
 
    cout << "Jaka liczbe poszukujesz: ";
    cin >> szukana;

    
 
    cout << "Poszukiwana liczba znajduje sie na pozycji: " << endl;
    for(int i =0; i <= 25; i++){
    cout << liczby[i] << ", ";
    }
}


