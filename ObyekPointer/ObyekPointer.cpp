#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim();	//deklarasi methode
};

void mahasiswa::showNim() {		//implementasi methode di luar class
	cout << "No Induk = " << nim << endl;
}

int main()
{
	mahasiswa mhs( 1 );		//objek mhs
	mhs.showNim();			//Member Access Operator

	mahasiswa& ref = mhs;

}
