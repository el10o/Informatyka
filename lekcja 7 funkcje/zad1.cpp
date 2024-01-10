 #include <iostream>
using namespace std;

void przywitanie(string imie, string nazwisko) {
	cout << "Wpisales imie: " << imie << " " << nazwisko;
}

int main() {
	string imie, naziwsko;
	cout <<"Podaj swoje imie: ";
	cin >> imie;
	cout <<"Podaj swoje nazwisko; ";
	cin >> nazwisko;
	przywitanie(imie, nazwisko);
}
+