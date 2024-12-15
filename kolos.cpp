#include<iostream>
#include<iomanip>

using namespace std;

class Autor
{
private:
	string wykonawca, gatunek;
	int ocena;
public:
	Autor() {
		cout << "Konstruktor domyslny klasy Autor" << endl;
		wykonawca = "Pink Floyd";
		gatunek = "Rok";
		ocena = 5;
	}
	Autor(string wyk, string gat, int oc) {
		cout << "Konstruktor parametryczny klasy Autor" << endl;
		wykonawca = wyk;
		gatunek = gat;
		ocena = oc;
	}
	void setOcena(int so) {
		ocena = so;
	}

	void wyswietl()
	{
		cout << "Autor" << setw(20) << "Gatunek muzyki" << setw(10) << "ocena" << endl;
		cout << wykonawca << setw(15) << gatunek << setw(15) << ocena << endl;
	}
};

class Plyta : public Autor
{
private:
	string tytul;
	int liczba, ocen;
	float czas;
public:
	void pwyswietl() {
		wyswietl();
		cout << setw(10) << "Tytul" << setw(20) << "Liczba utworow" << setw(20) << "Czas trwania" << setw(10) << "Ocena" << endl;
		cout << tytul << setw(10) << liczba << setw(10) << czas << setw(20) << ocen <<  endl;
	}

	Plyta() {
		cout << "Konstruktor domyslny klasy Plyta" << endl;
		tytul = "Dark side of the Moon";
		liczba = 9;
		czas = 44;
		ocen = 5;
	}

	Plyta(string tt, int l, float cz, int po) {
		cout << "Konstruktor parametryczny klasy Plyta" << endl;
		tytul = tt;
		liczba = l;
		czas = cz;
		ocen = po;

	}

	void setOcena(int po) {
		ocen = po;
	}
};

int main()
{
	Autor a1;
	a1.wyswietl();

	Autor a2("69", "Rap", 3);
	a2.wyswietl();

	cout << "Zmiana oceny" << endl;
	a2.setOcena(4);
	a2.wyswietl();

	Plyta p1;
	p1.pwyswietl();
	cout << "Zmiana oceny dla klast Plyta" << endl;
	p1.setOcena(4);
	p1.pwyswietl();

	Plyta p2("Thank you for the venom", 15, 45, 4);
	p2.pwyswietl();
	
}