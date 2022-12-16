#include <iostream>
#include <stdlib.h>


using namespace std;



int main() {
	//V01
	string m = "meter ", m2 = "meter2 ", admin, fitur, fitur1, fitur2, pass,imputukuran,error;
	int ukuran, ukuran1, ukuran2, panjang, panjang1, panjang2, lebar, lebar1, lebar2, tinggi, tinggi1, tinggi2, harga, harga1, harga2, bulan, bulan1, bulan2, a = 1
		, jumlahbulan, pendapatan = 1, totalpendapatan = 1;
	//VAX01
	const int ribu = 200000;
	//VAX02
	fitur = "kamarmandi dalam,wifi,tempat nongkrong,kulkas bersama";
	fitur1 = "kamarmandi dalam,wifi,tempat nongkrong,kulkas perkamar";
	fitur2 = "kamarmadi dalam,wifi,tempat nongkrong,kulkas perkamar,kasur";
	//C01=METER
	//A1

	panjang = 2;
	lebar = 3;
	tinggi = 4;
	ukuran = panjang * lebar * tinggi;
	harga = ukuran * ribu;
	//A2
	panjang1 = 5;
	lebar1 = 6;
	tinggi1 = 4;
	ukuran1 = panjang1 * lebar1 * tinggi1;
	harga1 = ukuran1 * ribu;
	//A3

	panjang2 = 9;
	lebar2 = 10;
	tinggi2 = 4;
	ukuran2 = panjang2 * lebar2 * tinggi2;
	harga2 = ukuran2 * ribu;


	//M01
menu:
	cout << "===========\n";
	cout << "selamat datang di sistem kami\n";
	cout << "selamat datang silahkan pilih ukuran kamar anda\n";
	cout << "panjang " << panjang << m << "lebar " << lebar << m << "tinggi " << tinggi << m << "ukuran " << ukuran << m2 << "pilih 1\n";
	cout << "panjang " << panjang1 << m << "lebar " << lebar1 << m << "tinggi " << tinggi1 << m << "ukuran " << ukuran1 << m2 << "pilih 2\n";
	cout << "panjang " << panjang2 << m << "lebar " << lebar2 << m << "tinggi " << tinggi2 << m << "ukuran " << ukuran2 << m2 << "pilih 3\n";
	cout << "nomor kami dan bantuan pilih 4\n";
	cout << "keluar pilih 5\n";
	cout << "admin 6\n";
	cout << "===========\n";
	cin >> imputukuran;
	system("cls");
	//A01
	if (imputukuran == "1") {
		cout << "===========\n";
		cout << "silahkan pilih berapa bulan(perbulan) " << harga << endl;
		cin >> bulan;
		harga = harga * bulan;
		cout << "maka biayanya akan " << harga << endl;
		cout << fitur << endl;
		cout << "terimakasih telah memilih kami\n";
		cout << "===========\n";
		goto menu;
	}
	//A02
	else if (imputukuran == "2") {
		cout << "===========\n";
		cout << "silahkan pilih berapa bulan(perbulan) " << harga1 << endl;
		cin >> bulan1;
		harga1 = harga1 * bulan1;
		cout << "maka biayanya akan " << harga1 << endl;
		cout << fitur1 << endl;
		cout << "terimakasih telah memilih kami\n";
		cout << "===========\n";
		goto menu;
	}
	//A03
	else if (imputukuran == "3") {
		cout << "===========\n";
		cout << "silahkan pilih berapa bulan(perbulan) " << harga2 << endl;
		cin >> bulan2;
		harga2 = harga2 * bulan2;
		cout << "maka biayanya akan " << harga2 << endl;
		cout << fitur2 << endl;
		cout << "terimakasih telah memilih kami\n";
		cout << "===========\n";
		goto menu;
	}
	//AX001
	else if (imputukuran == "4") {
		cout << "===========\n";
		cout << "nomor kami 08111111\n";
		cout << "email kami @email\n";
		cout << "alamat kami jalan\n";
		cout << "===========\n";
		goto menu;
	}
	//0=00
	else if (imputukuran == "5") {
		cin.ignore();
	}
	//AX002
	else if (imputukuran == "6") {
	loginpass:
		cout << "masukan nama\n";
		cin >> admin;
		system("cls");
		if (admin == "admindua") {
		loginpass2:
			cout << "masukan password\n";
			cin >> pass;
			system("cls");
			if (pass == admin) {
				cout << "selamat datang\n";
				cout << "kalkulator perhitungan total pendapatan. masukan jumlah bulan\n";
				cin >> jumlahbulan;
				for (a = 1; a <= jumlahbulan; a++) {
					cout << "masukan pendapatan bukan ke" << a << endl;
					cin >> pendapatan;
					totalpendapatan += pendapatan;


				}
				cout << "total pendapatan\n" << totalpendapatan << endl;
				cout << "rata rata\n" << totalpendapatan / a << endl;
				cout << "total bulan\n" << a << endl;
				goto menu;
			}
			else { cout << "paswword salah\n"; }
			goto loginpass2;
		}
		else { cout << "user name salah\n"; }
		goto loginpass;
	}
	//unknowimput/404
	else
	{
		cout << "maaf imput " << imputukuran << " tidak di kenali,pilih 1 jika kembali atau pilih 2 jika keluar\n";
		cin >> error;
		if (error == "1") { goto menu; 
		}
		else { cin.ignore(); }

		

	}
	//END OF LINE
}
