#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim();	//deklarasi methode
};

void mahasiswa::showNim() {
	cout << "No Induk = " << nim << endl;
}
