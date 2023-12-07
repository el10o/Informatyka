   #include <iostream>
using namespace std;

int main(){
	
	cout << "Wprowadz 5 liczb:"; 
int liczba[ 5 ];
for(int i=0; i <5; i++)


{
    cin >> liczba[ i ];
}

cout << "Liczby parzyste: " <<endl;
for(int i=0; i<5; i++)
	if( liczba[ i ] %2 == 0) {
		
	
		cout << liczba[i] << " ";
}


}

