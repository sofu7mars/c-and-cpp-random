#include<iostream>
using namespace std;

long long tab[1000000]; //tablica z posortowanymi elementami

//l - lewy index tablicy, p - prawy index tablicy
int szukaj(int l, int p, long szukana) 
{
	int sr;
	while(l<=p)
	{
		sr = (l + p)/2;
		
		if(tab[sr] == szukana)
			return sr;
			
		if(tab[sr] > szukana)
			p = sr - 1;
		else
			l = sr + 1;
}

	return -1; //zwracamy -1, gdy nie znajdziemy elementu
}

int main()
{
	long long n,szukana;
	cout << "Podaj ilość elementów: ";
	cin>>n; //podajemy ilość elementów do wczytania n < 1000000
	
	for(int i=0;i<n;i++){
        cout << i << "-ty element tablicy: ";
		cin>>tab[i]; //wczytanie elementów tablicy
	}
    cout << "Podaj szukaną: ";	
	cin>>szukana;
 
	int pozycja = szukaj(0,n-1,szukana);
 
	if(pozycja==-1){
		cout<<"Liczba "<<szukana<<" nie występuje w zbiorze"<<endl;
	} else{
		cout<<"Liczba "<<szukana<<" występuje w zbiorze w komórce o numerze "<<pozycja<<endl;
	}
	return 0;
}