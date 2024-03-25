#include <iostream>
using namespace std;
struct Ksiazka {
    string tytul;
    string autor;
    string rok;
    string wydawnictwo;
    double cena;
};
void wyszukajKsiazki(const Ksiazka ksiazki[], int rozmiar, int opcja, const void* kryterium);
int main() {
    Ksiazka ksiazki[7] = {
        {"Rzeka", "A.Mickiewicz", "1925","JPG", 23.54},
        {"Zaba", "Tolkien", "1926", "JPG", 24.54},
        {"Dom", "R.Riordan", "1927", "UPC", 25.54},
        {"Bozena", "B.Noga", "1928", "HBO", 26.54},
        {"Maks", "Tolkien", "1921", "UPC", 27.54},
        {"Trenowata", "D.Mus", "1930", "Helion", 28.54},
        {"Potop", "H.Sienkiewicz", "1931", "Helion", 29.54}
    };
    while (true) {
        cout << "Witaj w ksiegarnii\nPo jakiej kategorii chcial bys wyszukac ksiazke:\n1. Rok wydania\n2. Cena\n3. Wydawnictwo\n0. Wyjscie\n";
        int opcja;
        cin >> opcja;
        if (opcja == 0) break;
        switch (opcja) {
            case 1: {
                string rok;
                cout << "Podaj od jakiego roku chcesz zobaczyc ksiazki: ";
                cin >> rok;
                wyszukajKsiazki(ksiazki, 7, opcja, &rok);
                break;
            }
            case 2: {
                double cena;
                cout << "Podaj minimalna cene ksiazki: ";
                cin >> cena;
                wyszukajKsiazki(ksiazki, 7, opcja, &cena);
                break;
            }
            case 3: {
                string wydawnictwo;
                cout << "Podaj nazwe wydawnictwa: ";
                cin >> wydawnictwo;
                wyszukajKsiazki(ksiazki, 7, opcja, &wydawnictwo);
                break;
            }
            default:
                cout << "Nieznana opcja\n";
                break;
        }
    }
    return 0;
}
void wyszukajKsiazki(const Ksiazka ksiazki[], int rozmiar, int opcja, const void* kryterium) {
    bool znaleziono = false;

    for (int i = 0; i < rozmiar; ++i) {
        bool pasuje = false;
        switch (opcja) {
            case 1: {
                string rok = *(string*)kryterium;
                if (ksiazki[i].rok >= rok) pasuje = true;
                break;
            }
            case 2: {
                double cena = *(double*)kryterium;
                if (ksiazki[i].cena >= cena) pasuje = true;
                break;
            }
            case 3: {
                string wydawnictwo = *(string*)kryterium;
                if (ksiazki[i].wydawnictwo == wydawnictwo) pasuje = true;
                break;
            }
}
        if (pasuje) {
            znaleziono = true;
            cout << "Tytul: " << ksiazki[i].tytul << " Autor:" << ksiazki[i].autor << " Rok:" << ksiazki[i].rok << " Wydawnictwo: " << ksiazki[i].wydawnictwo << " Cena: " << ksiazki[i].cena << endl;
        }
    }
}