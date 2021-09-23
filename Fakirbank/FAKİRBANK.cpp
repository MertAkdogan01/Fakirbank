#include <iostream>
using namespace std;

int main()
{
	//Kullanýcý adý = mert01, þifresi =1234gs


	int secim;
	double cevir, para=10;
	string kullaniciadi, sifre;

	cout << "FAKIRBANKA HOSGELDINIZ \n******************";
	cout << "\nKullanici Adi Giriniz : " << endl;
	cin >> kullaniciadi;
	cout << "Sifrenizi Giriniz : " << endl;
	cin >> sifre;


	//1 DOLAR = 8,40
	//1 EURO  = 9,84
	//1 STERLÝN =10,96

	if (kullaniciadi == "mert01" && sifre == "1234gs")
	{
		cout << "Toplam paraniz = " <<para<<"TL"<< endl;
		cout << "1-TL'yi Dolar'a ceviriniz\n2-TL'yi Euro'ya ceviriniz\n3-TL'yi Sterlin'e ceviriniz\n4-Cikis Yap";
		cout << "\nSeciniz : ";
		cin >> secim;

	


		while (secim < 1 || secim > 4)
		{
			cout << "Lutfen 1 ile 4 arasinda seceneklerden birini seciniz : ";
			cin >> secim;
		}
		if (secim == 1)
		{
			cevir = para / 8,40;
			cout << "Paraniz Donusturuldu, Yeni paraniz = " << cevir << " Dolar vardir."<<"50 Tl ve altina islem yapilmamaktadir !  Fakirsiniz, para biriktirip tekrar deneyiniz ! \n\n";
			
		}
		else if (secim == 2)
		{
			cevir = para / 9,84;
			cout << "Paraniz Donusturuldu, Yeni paraniz = " << cevir << " Euro dir.";
		}
		else if (secim == 3)
		{
			cevir = para / 10,96;
			cout << "Paraniz Donusturuldu, Yeni paraniz = " << cevir << " Sterlin dir.";
		}
		else
		{
			cout << "Basariyla cikis yaptiniz";
		}


	}
	else
	{
		cout << "Kullanici adiniz veya sifreniz hatalidir ";
		cout << "/nUygulamadan otomatik olarak cikarildiniz";
	}


}