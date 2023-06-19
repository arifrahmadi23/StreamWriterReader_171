#include <iostream>
#include <exception>
//untuk obyek exception yang akan digunakan
#include <array>
//untuk obvyek array yang akan kita gunakkan
using namespace std;

int main()
{
	cout << "Awal Program" << endl; //penanda 1:...
	try {
		array<int, 3> data = { 1,2,3 };
		//pesan array integer 3 elemen 
		cout << data.at(4) << endl;
		//memenggil array elemen ke 5
	}
}
