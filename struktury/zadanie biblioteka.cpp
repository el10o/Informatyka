 #include <iostream>
 
 struct Ksiazka
 
	string tytul;
 	string autor;
 	int rok Wydania;
 	string wydawnictwo;
 	double cena;
 }
 
 	void wyszukaj Ksiazki (const Ksiazka ksiazki )
 
 int main(){
 	Ksiegarnia ksiazki[ 7 ] =
{
    { "Tytul1", "autor1", 1925, "Helion1", 23.54 },
    { "Tytul2", "autor2", 1926, "Helion2", 24.54 },
    { "Tytul3", "autor1", 1927, "Helion3", 25.54 },
    { "Tytul4", "autor2", 1928, "Helion1", 26.54 },
    { "Tytul5", "autor1", 1921, "Helion2", 27.54 },
    { "Tytul6", "autor2", 1930, "Helion3", 28.54 },
    { "Tytul7", "autor1", 1931, "Helion1", 29.54 },
};
 	while (true) {
 		cout<< "Witaj w ksiegarnii! Po jakiej kategori chcialbys wyszukac ksiazke:/n1.Rok wydania/n2.Cena/n3.Wydawnictwo/n0.Wyjscie/n";
 		int opcja;
 		cin >> opcja;
 		if (opcja == 0)break
 		
 		switch (opcja) {
 			case 1:{
 				int rok;
 				cout<< "Podaj od jakiego roku chcesz zobaczyc ksiazki";
				 cin >> rok;
				 wyszukaj Ksiazki (ksiazki,7,opcja,$rok);
				break;
			 }
		
			 }
		 }
		 }
	 })
 	
 	
 	
 	
 	
 	
 
 
 
 
 
 
 
  }