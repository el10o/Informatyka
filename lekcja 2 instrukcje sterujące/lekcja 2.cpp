 #include <iostream>
  using namespace std;
  
	 int main (){
	 
  	
  		short a, b;
  		cout << "Podaj liczbe 1: ";
  		cin >> a;
  		cout << "Podaj liczbe 2: ";
  		cin >> b;
  		
  		if( a > b ){
  			cout<< a << " > " << b;
  	}
  	else if (a == b){
  		cout<< a << "== " <<b;
	  }
	  else{
	  	cout << a << " < " <<b;
	  }
  	cout << endl;
  	system ("pause");
}
  
	