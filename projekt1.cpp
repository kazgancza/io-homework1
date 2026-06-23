#include <iostream>

using namespace std;

void is_prime(int n){
	if(n<=1) return false;
	int i=2;
	while(i*i <= n){
		if(n % i == 0) return false;
	}
	return true;
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
	if(wyjscie == 1){
		if(is_prime(a)){
			cout << a << " jest pierwsza!" << endl;
		}
		else
		{
			cout << a << " NIE jest pierwsza" << endl;
		}
	}
    } while(wyjscie != 0);
    return 0;
}
