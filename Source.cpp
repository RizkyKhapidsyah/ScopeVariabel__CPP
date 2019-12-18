#include <iostream>
#include <conio.h>

using namespace std;

int x = 10; //Variabel Global

int ambil_global()
{
	return x; //Mengambil Variabel Global
}

int x_local()
{
	int x = 5;
	return x;
}

int main()
{
	cout << "1. Variabel Global         = " << x << endl;
	int x = 8; //Variabel Local untuk fungsi main
	cout << "2. Variabel Local: main    = " << x << endl;
	cout << "3. Variabel: ambil_global  = " << ambil_global() << endl;
	cout << "4. Variabel Local: main    = " << x << endl;
	cout << "5. Variabel: x_local       = " << x_local() << endl;
	cout << "6. Variabel Local: main    = " << x << endl;

	cout << "7. Variabel Local: main    = " << x << endl;
	{
		cout << "8. Variabel Local: main    = " << x << endl;
		
		//Block Scope
		int x = 1;
		cout << "9. Variabel Local: block   = " << x << endl;
		cout << "10. Variabel Global        = " << ambil_global() << endl;
	}

	cout << "11. Variabel Local: main   = " << x << endl;
	
	_getch();
	return 0;
}