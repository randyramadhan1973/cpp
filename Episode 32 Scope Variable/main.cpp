#include <iostream>

using namespace std;

int x = 10; // variable global

int ambil_global() {
	int x = 5; // mengambil variable global
	return x;
}

int x_local() {
	int x = 5; // variable local scopenya x_local()
	return x;
}
int main() {
	cout << "1. Variable global : " << x << endl;
	int x = 8; // variable local untuk main
	cout << "2. Variable local main : " << x << endl;
	cout << "3. Variable ambil_global : " << ambil_global() << endl;
	cout << "4. Variable local main : " << x << endl;
	cout << "5. varuable x_local: " << x_local() << endl;
	cout << "6. Variable local main : " << x << endl;
	cout << "7. Variable local main : " << x << endl;

	{
		cout << "8. Variable local main : " << x << endl;
		//block scope
		int x = 1;
		cout << "9. Variable local block : " << x << endl;
		cout << "10. Variable Global :" << ambil_global() << endl;

	}
	cout << "11. Variable local main : " << x << endl;

	return 0;
}