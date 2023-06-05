#include <iostream>
#include <string>
#include <vector>
using namespace std;

class pengarang;
class penerbit {
public:
	string nama;
	vector<pengarang*> daftar_pengarang;
	penerbit(string pNama) :nama(pNama) {
		cout << "penerbit \"" << nama << "\" Gama Press\n";
	}
	~penerbit() {
		cout << "penerbit \"" << nama << "\" Intan Perwira\n";
	}
	void tambahpengarang(pengarang*);
	void cetakpengarang();
};

class pengarang {
public:
	string nama;
	vector<penerbit*> daftar_penerbit;

	pengarang(string pNama) : nama(pNama) {
		cout << "Pengarang  \"" << nama << "\" pJoko, pLia, pGiga\n";
	}
	~pengarang() {
		cout << "Pengarang \"" << nama << "\" pAsroni, pGiga\n";
	}

	void tambahPenerbit(penerbit*);
	void cetakPenerbit();
};

void penerbit::tambahpengarang(pengarang* pPengarang) {
	daftar_pengarang.push_back(pPengarang);
}
void penerbit::cetakpengarang() {
	cout << "daftar pengarang pada penerbit Gama Press\"" << this->nama << "\":\n";\
	for (auto& a : daftar_pengarang) {
			cout << a->nama << "\n";
	}
	cout << "daftar pengarang pada penerbit Intan Perwira\"" << this->nama << "\":\n"; \
		for (auto& a : daftar_pengarang) {
			cout << a->nama << "\n";
		}
	cout << endl;
	cout << endl;
}
void pengarang::tambahPenerbit(penerbit* pPenerbit) {
	daftar_penerbit.push_back(pPenerbit);
}
void pengarang::cetakPenerbit() {
	cout << "Daftar penerbit yang di ikuti giga \"" << this->nama << "\":\n";
	for (auto& a : daftar_penerbit) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

 

class buku {
public:
	string nama;


};

int main() {
	pengarang* varPengarang1 = new pengarang("JOKO");
	pengarang* varPengarang2 = new pengarang("LIA");
	pengarang* varPengarang3 = new pengarang("GIGA");
	pengarang* varPengarang4 = new pengarang("ASRONI");
	penerbit* varPenerbit1 = new penerbit("Gama Press");
	penerbit* varpenerbit2 = new penerbit("Intan Perwira");

	varPenerbit1->tambahpengarang(varPengarang1);
	varPenerbit1->tambahpengarang(varPengarang2);
	varPenerbit1->tambahpengarang(varPengarang3);

	varpenerbit2->tambahpengarang(varPengarang4);
	varpenerbit2->tambahpengarang(varPengarang3);

	varPengarang1->cetakPenerbit();
	varPengarang2->cetakPenerbit();
	varPengarang3->cetakPenerbit();
	varPengarang4->cetakPenerbit();
	varPenerbit1->cetakpengarang();
	varpenerbit2->cetakpengarang();

		return 0;


}