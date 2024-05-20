 #include <iostream>

using namespace std;

int main()
{
    int liczba1 = 1, liczba2 = 2, liczba3 = 3;
    int *wsk[3];
    
    wsk[0] = &liczba1;
    wsk[1] = &liczba2;
    wsk[2] = &liczba3;
    
    cout << *wsk[1] << endl;
    return 0;
}