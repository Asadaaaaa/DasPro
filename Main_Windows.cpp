#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Nama / Author: Muhammad Mikail Asada
// NIM: 2109708
// RPL 2021

int angkaTerbesar(int a, int b) {
	int c = 0;
	if(a > c) {
		c = a;
	}
	if(b > c) {
		c = b;
	}
	return c;
}

int penjumlahanDeret(int a) {
	int num1 = 0, num2 = 0;
	
	cout << "  Deret : ";
	for(int i = 0; i <= a; i++) {
		num2 += i;
		if(i < a && i > 0) {
			cout << i << " + ";
		}else if(i == a) {
			cout << i << endl;
		}
	}
	cout << "Total Deret : " << num2 << endl;
	return 0;
}

int penjumlahan(int a, int b) {
	return a + b;
}

int pengurangan(int a, int b) {
	return a - b;
}

int perkalian(int a, int b) {
	return a * b;
}

float pembagian(int a, int b) {
	return a / b;
}

float akarKuadrat(int a) {
	return sqrt(a);
}


int main() {
	// Menu Variable
	string warn, input, word1, word2, word3;
	float num1 = 0, num2 = 0, num3 = 0, num4 = 0;
	
	// MAIN MENU PAGE 1
	MAIN_MENU: {
		system("cls");
		cout << "=-=-= Menu Utama =-=-=" << endl;
		cout << "  1). Nama dan NIM" << endl;
		cout << "  2). Penjumlahan 2 bilangan" << endl;
		cout << "  3). Menghitung Volume Bola" << endl;
		cout << "  4). Conversi Menit ke Detik" << endl;
		cout << "  5). Menghitung jumlah string" << endl;
		cout << endl << "         (1/3)         " << endl;
		cout << "=-=-= ( ) (-) (>) =-=-=" << endl;
		
		if(warn != "") {
			cout << endl << "Peringatan: " << warn;
			warn = "";
		}
		cout << endl << "> Input: ";
		getline(cin, input);
		if(input == "-") {
			system("cls");
			
			return 0;
		} else if(input == ">") {
			
			goto MAIN_MENU_2;
		} else if(input == "1") {
			
			goto MENU_SATU;
		} else if(input == "2") {
			
			goto MENU_DUA;
		} else if(input == "3") {
			
			goto MENU_TIGA;
		} else if(input == "4") {
			
			goto MENU_EMPAT;
		} else if(input == "5") {
			
			goto MENU_LIMA;
		} else {
			warn = "Menu tidak ditemukan!";
			goto MAIN_MENU;
		}
	}
	
	// MAIN MENU PAGE 2
	MAIN_MENU_2: {
		system("cls");
		cout << "=-=-= Menu Utama =-=-=" << endl;
		cout << "  6). Menentukan jumlah followers terbanyak" << endl;
		cout << "  7). Seleksi model catwalk" << endl;
		cout << "  8). Langganan Internet dan TV cable" << endl;
		cout << "  9). Diamond" << endl;
		cout << "  10). Honor Freelance" << endl;
		cout << endl << "         (2/3)         " << endl;
		cout << "=-=-= (<) (-) (>) =-=-=" << endl;
		
		if(warn != "") {
			cout << endl << "Peringatan: " << warn;
			warn = "";
		}
		cout << endl << "> Input: ";
		getline(cin, input);
		if(input == "-") {
			system("cls");
			
			return 0;
		} else if(input == "<") {
			
			goto MAIN_MENU;
		} else if(input == ">") {
			
			goto MAIN_MENU_3;
		} else if(input == "6") {
			
			goto MENU_ENAM;
		} else if(input == "7") {
			
			goto MENU_TUJUH;
		} else if(input == "8") {
			
			goto MENU_DELAPAN;
		} else if(input == "9") {
			
			goto MENU_SEMBILAN;
		} else if(input == "10") {
			
			goto MENU_SEPULUH;
		} else {
			warn = "Menu tidak ditemukan!";
			
			goto MAIN_MENU_2;
		}
	}
	
	// MAIN MENU PAGE 3
	MAIN_MENU_3: {
		system("cls");
		cout << "=-=-= Menu Utama =-=-=" << endl;
		cout << "  11). Bilangan Prima" << endl;
		cout << "  12). Login Form" << endl;
		cout << "  13). (Function) Bilangan terbesar" << endl;
		cout << "  14). (Function) Total deret" << endl;
		cout << "  15). (Function) Penjumlahan dua bilangan" << endl;
		cout << endl << "         (3/3)         " << endl;
		cout << "=-=-= (<) (-) ( ) =-=-=" << endl;
		
		if(warn != "") {
			cout << endl << "Peringatan: " << warn;
			warn = "";
		}
		cout << endl << "> Input: ";
		getline(cin, input);
		if(input == "-") {
			system("cls");
			
			return 0;
		} else if(input == "<") {
			
			goto MAIN_MENU_2;
		} else if(input == "11") {
			
			goto MENU_SEBELAS;
		} else if(input == "12") {
			
			goto MENU_DUA_BELAS;
		} else if(input == "13") {
			
			goto MENU_TIGA_BELAS;
		} else if(input == "14") {
			
			goto MENU_EMPAT_BELAS;
		} else if(input == "15") {
			
			goto MENU_LIMA_BELAS;
		} else {
			warn = "Menu tidak ditemukan!";
			
			goto MAIN_MENU_3;
		}
	}
	
	// MENU SATU
	MENU_SATU: {
	
		system("cls");
		cout << "=-=-= Menu Satu =-=-=" << endl;
		cout << " Tugas: Input Nama & NIM, lalu tampilkan\n hasil inputan" << endl;
		if(warn != "") {
			cout << "Peringatan: " << warn << endl;
			warn = "";
		}
		
		if(word1 == "") {
			cout << endl << "> Nama: ";
			getline(cin, input);
			if(input == "") {
				warn = "Nama tidak boleh kosong!";
				
				goto MENU_SATU;
			} else if(input.length() < 3) {
				warn = "Nama minimal 3 karakter";
				
				goto MENU_SATU;
			}
			word1 = input;
			
			goto MENU_SATU;
			
			return 0;
		}
		cout << endl << "  Nama: " << word1 << endl;
	
		if(word2 == "") {
			cout << endl << "> NIM: ";
			getline(cin, input);
			if(input == "") {
				warn = "NIM tidak boleh kosong!";
				
				goto MENU_SATU;
			} else if(input.length() != 7) {
				warn = "Angka harus 7 karakter!";
				
				goto MENU_SATU;
			}
			try{
				num1 = stoi(input);
				num1 = 0;
			} catch(exception &err) {
				warn = "Input harus berupa angka!";
				
				goto MENU_SATU;
			}
			word2 = input;
			
			goto MENU_SATU;
		}
		cout << "  NIM: " << word2 << endl;
		cout << "Hasil: " << word1 << " (" << word2 << ")" << endl;
		
		cout << endl << "> Kembali ke menu utama? [Y/n]: ";
		getline(cin, input);
		
		if(input == "y" || input == "Y") {
			word1 = "";
			word2 = "";
			
			goto MAIN_MENU;
		} else if(input == "n" || input == "N") {
			system("cls");
			
			return 0;
		} else {
			
			goto MENU_SATU;
		}
	}
	
	// MENU DUA
	MENU_DUA: {
		system("cls");
		cout << "=-=-= Menu Dua =-=-=" << endl;
		cout << " Tugas: Input dua bilangan, lalu\n Jumlahkan " << endl;
		if(warn != "") {
			cout << "Peringatan: " << warn << endl;
			warn = "";
		}
		
		if(num1 == 0) {
			cout << endl << "> Angka Pertama: ";
			getline(cin, input);
			if(input == "") {
				warn = "Harap isi angka pertama";
				
				goto MENU_DUA;
			}
			try{
				num1 = stoi(input);
			} catch(exception &err) {
				warn = "Harap isi input berupa angkat (Integer)";
				num1 = 0;
				
				goto MENU_DUA;
			}
			goto MENU_DUA;
		}
		cout << endl << "  Angka Pertama: " << num1 << endl;
		
		if(num2 == 0) {
			cout << endl << "> Angka Kedua: ";
			getline(cin, input);
			if(input == "") {
				warn = "Harap isi angka pertama";
				
				goto MENU_DUA;
			}
			try{
				num2 = stoi(input);
			} catch(exception &err) {
				warn = "Harap isi input berupa angkat (Integer)";
				num2 = 0;
				
				goto MENU_DUA;
			}
			
			goto MENU_DUA;
		}
		cout << "  Angka Kedua: " << num2 << endl;
		cout << "Hasil: " << num1 << " + " << num2 << " = " << num1 + num2<< endl;
		
		cout << endl << "> Kembali ke menu utama? [Y/n]: ";
		getline(cin, input);
		if(input == "y" || input == "Y") {
			num1 = 0;
			num2 = 0;
			
			goto MAIN_MENU;
		} else if(input == "n" || input == "N") {
			system("cls");
			
			return 0;
		} else {
			
			goto MENU_DUA;
		}
	}
	
	// MENU TIGA
	MENU_TIGA: {
		system("cls");
		cout << "=-=-= Menu Utama =-=-=" << endl;
		cout << "  Tugas: Menghitung Volume Bola" << endl;
		if(warn != "") {
			cout << "Peringatan: " << warn << endl;
			warn = "";
		}
		
		if(num1 == 0) {
			cout << endl << "> Pi: ";
			getline(cin, input);
			if(input == "") {
				warn = "Harap isi pi!";
				
				goto MENU_TIGA;
			}
			try{
				num1 = stof(input);
			} catch(exception &err) {
				warn = "Pi harus berupa angka!";
				num1 = 0;
				
				goto MENU_TIGA;
			}
			if(num1 < 3.14) {
				warn = "Minimum pi 3.14!";
				num1 = 0;
				
				goto MENU_TIGA;
			}
			
			goto MENU_TIGA;
		}
		cout << endl << "  Pi: " << num1 << endl;
		
		if(num2 == 0) {
			cout << endl << "> Jari-jari: ";
			getline(cin, input);
			if(input == "") {
				warn = "Harap isi jari-jari";
				
				goto MENU_TIGA;
			}
			try{
				num2 = stof(input);
			} catch(exception &err) {
				warn = "Harap isi jari-jari";
				num2 = 0;
				
				goto MENU_TIGA;
			}
			
			goto MENU_TIGA;
		}
		cout << "  Jari-jari: " << num2 << endl;
		cout << "Volume Bola adalah: " << "(4 x " << num1 << " x " << num2 << "^3) / 3 = "
		<< (4 * num1 * num2 * num2 * num2)/3 << endl;
		
		cout << endl << "> Kembali ke menu utama? [Y/n]: ";
		getline(cin, input);
		if(input == "y" || input == "Y") {
			num1 = 0;
			num2 = 0;
			
			goto MAIN_MENU;
		} else if(input == "n" || input == "N") {
			system("cls");
			
			return 0;
		} else {
			
			goto MENU_TIGA;
		}
	}
	
	// MENU EMPAT
	MENU_EMPAT: {
		system("cls");
		cout << "=-=-= Menu Empat =-=-=" << endl;
		cout << "  Tugas: Mengkonversikan menit ke detik" << endl;
		if(warn != "") {
			cout << "Peringatan: " << warn << endl;
			warn = "";
		}
		
		if(num1 == 0) {
			cout << endl << "> Menit: ";
			getline(cin, input);
			if(input == "") {
				warn = "Harap isi menit";
				
				goto MENU_EMPAT;
			}
			try{
				num1 = stoi(input);
			} catch(exception &err) {
				warn = "Harap isi menit berupa angka";
				num1 = 0;
				
				goto MENU_EMPAT;
			}
			if(num1 < 0) {
				warn = "Harap isi menit minimum angka 0";
				num1 = 0;
				
				goto MENU_EMPAT;
			}
			
			goto MENU_EMPAT;
		}
		cout << endl << "  Menit: " << num1 << " Menit = " << num1 * 60 << " detik" << endl;
		
		if(num2 == 0) {
			cout << "> Detik: ";
			getline(cin, input);
			if(input == "") {
				warn = "Harap isi detik";
				
				goto MENU_EMPAT;
			}
			try{
				num2 = stoi(input);
			} catch(exception &err) {
				warn = "Harap isi detik berupa angka";
				num2 = 0;
				
				goto MENU_EMPAT;
			}
			if(num2 < 0) {
				warn = "Harap isi detik minimum angka 0";
				num2 = 0;
				
				goto MENU_EMPAT;
			}
			
			goto MENU_EMPAT;
		}
		cout << "  Detik: " << num2 << " detik" << endl;
		cout << "Total: " << (num1 * 60) + num2 << " detik" << endl;
		
		cout << endl << "> Kembali ke menu utama? [Y/n]: ";
		getline(cin, input);
		if(input == "y" || input == "Y") {
			num1 = 0;
			num2 = 0;
			
			goto MAIN_MENU;
		} else if(input == "n" || input == "N") {
			system("cls");
			
			return 0;
		} else {
			
			goto MENU_EMPAT;
		}
	}
	
	// MENU LIMA
	MENU_LIMA: {
		system("cls");
		cout << "=-=-= Menu Lima =-=-=" << endl;
		cout << "  Tugas: Menghitung jumlah string" << endl;
		if(warn != "") {
			cout << "Peringatan: " << warn << endl;
			warn = "";
		}
		
		if(word1 == "") {
			cout << endl << "> Kata Pertama: ";
			getline(cin, input);
			if(input == "") {
				warn = "Harap isi menit";
				
				goto MENU_LIMA;
			}
			word1 = input;
			
			goto MENU_LIMA;
		}
		cout << endl << "  Kata Pertama: " << '"' << word1 << '"' << " = " << 
		word1.length() << " karakter" << endl;
		
		if(word2 == "") {
			cout << "> Kata Kedua: ";
			getline(cin, input);
			if(input == "") {
				warn = "Harap isi menit";
				
				goto MENU_LIMA;
			}
			word2 = input;
			
			goto MENU_LIMA;
		}
		cout << "  Kata Kedua: " << '"' << word2 << '"' << " = " << word2.length() 
		<< " karakter" << endl;
		
		cout << "Total String: " << word1.length() + word2.length() << 
		" karakter" << endl;
		
		cout << endl << "> Kembali ke menu utama? [Y/n]: ";
		getline(cin, input);
		if(input == "y" || input == "Y") {
			word1 = "";
			word2 = "";
			
			goto MAIN_MENU;
		} else if(input == "n" || input == "N") {
			system("cls");
			
			return 0;
		} else {
			
			goto MENU_LIMA;
		}
	}
	
	// MENU ENAM
	MENU_ENAM: {
		system("cls");
		cout << "=-=-= Menu Enam =-=-=" << endl;
		cout << "  Tugas: Tentukan jumkah follower terbanyak\ndari 3 orang" << endl;
		if(warn != "") {
			cout << "Peringatan: " << warn << endl;
			warn = "";
		}
		cout << endl
			 << "|--------------------------------------|" << endl
			 << "|1| Nama: " << word1 << ", Followers: " << fixed << int(num1) << endl
			 << "|2| Nama: " << word2 << ", Followers: " << fixed << int(num2) << endl
			 << "|3| Nama: " << word3 << ", Followers: " << fixed << int(num3) << endl
			 << "|--------------------------------------|" << endl;
		
		// Orang Pertama
		{
			if(word1 == "") {
				cout << endl << "> Nama: ";
				getline(cin, input);
				if(input == "") {
					warn = "Harap isi nama pertama";
				
					goto MENU_ENAM;
				} else if(input.length() < 3 || input.length() > 10) {
					warn = "Harap isi nama pertama dengan min 3 karakter dan max 10 karakter!";
					
					goto MENU_ENAM;
				}
				word1 = input;
				
				goto MENU_ENAM;
			}
		
			if(num1 == 0) {
				cout << endl << "> Followers: ";
				getline(cin, input);
				if(input == "") {
					warn = "Harap isi followers untuk nama pertama";
				
					goto MENU_ENAM;
				}
				try{
					num1 = stoi(input);
				} catch(exception &err) {
					warn = "Harap isi followers untuk nama pertama berupa angka";
					num1 = 0;
					
					goto MENU_ENAM;
				}
				if(num1 < 0) {
					warn = "Harap isi follower untuk nama pertama tidak boleh kurang dari 0!";
					num1 = 0;
					
					goto MENU_ENAM;
				}
			
				goto MENU_ENAM;
			}
		}
		
		//Orang Kedua
		{
			if(word2 == "") {
				cout << endl << "> Nama: ";
				getline(cin, input);
				if(input == "") {
					warn = "Harap isi nama kedua";
				
					goto MENU_ENAM;
				} else if(input.length() < 3 || input.length() > 10) {
					warn = "Harap isi nama kedua dengan min 3 karakter dan max 10 karakter!";
					
					goto MENU_ENAM;
				}
				word2 = input;
				
				goto MENU_ENAM;
			}
		
			if(num2 == 0) {
				cout << endl << "> Followers: ";
				getline(cin, input);
				if(input == "") {
					warn = "Harap isi followers untuk nama kedua";
				
					goto MENU_ENAM;
				}
				try{
					num2 = stoi(input);
				} catch(exception &err) {
					warn = "Harap isi followers untuk nama kedua berupa angka";
					num2 = 0;
					
					goto MENU_ENAM;
				}
				if(num2 < 0) {
					warn = "Harap isi follower untuk nama kedua tidak boleh kurang dari 0!";
					num2 = 0;
					
					goto MENU_ENAM;
				}
			
				goto MENU_ENAM;
			}
		}
		
		// Orang Ketiga
		{
			if(word3 == "") {
				cout << endl << "> Nama: ";
				getline(cin, input);
				if(input == "") {
					warn = "Harap isi nama ketiga";
				
					goto MENU_ENAM;
				} else if(input.length() < 3 || input.length() > 10) {
					warn = "Harap isi nama ketiga dengan min 3 karakter dan max 10 karakter!";
					
					goto MENU_ENAM;
				}
				word3 = input;
				
				goto MENU_ENAM;
			}
		
			if(num3 == 0) {
				cout << endl << "> Followers: ";
				getline(cin, input);
				if(input == "") {
					warn = "Harap isi followers untuk nama ketiga";
				
					goto MENU_ENAM;
				}
				try{
					num3 = stoi(input);
				} catch(exception &err) {
					warn = "Harap isi followers untuk nama ketiga berupa angka";
					num3 = 0;
					
					goto MENU_ENAM;
				}
				if(num3 < 0) {
					warn = "Harap isi follower untuk nama ketiga tidak boleh kurang dari 0!";
					num3 = 0;
					
					goto MENU_ENAM;
				}
			
				goto MENU_ENAM;
			}
		}
		
		if(num4 < num1){
			num4 = num1;
		}
		if(num4 < num2){
			num4 = num2;
		}
		if(num4 < num3){
			num4 = num3;
		}
		if(num4 == num1) {
			cout << endl << "Followers terbanyak diperoleh: " << word1
				 << ", " << fixed << int(num1) << " Followers" << endl;
		} else if(num4 == num2) {
			cout << endl << "Followers terbanyak diperoleh: " << word2
				 << ", " << fixed << int(num2) << " Followers" << endl;
		} else if(num4 == num3) {
			cout << endl << "Followers terbanyak diperoleh: " << word3
				 << ", " << fixed << int(num3) << " Followers" << endl;
		}
		
		cout << endl << "> Kembali ke menu utama? [Y/n]: ";
		getline(cin, input);
		if(input == "y" || input == "Y") {
			word1 = "";
			word2 = "";
			word3 = "";
			num1 = 0;
			num2 = 0;
			num3 = 0;
			num4 = 0;
			
			goto MAIN_MENU_2;
		} else if(input == "n" || input == "N") {
			system("cls");
			
			return 0;
		} else {
			
			goto MENU_ENAM;
		}
	}
	
	// MENU TUJUH
	MENU_TUJUH: {
		system("cls");
		cout << "=-=-= Menu Tuju =-=-=" << endl;
		cout << " Tugas: Seleksi Model CatWalk" << endl;
		if(warn != "") {
			cout << "Peringatan: " << warn << endl;
			warn = "";
		}
		
		if(word1 == "") {
			cout  << endl << "> Nama: ";
			getline(cin, input);
			if(input == "") {
				warn = "Harap isi nama!";
				
				goto MENU_TUJUH;
			} else if(input.length() < 3) {
				warn = "Harap isi nama minimal 3 karakter!";
				
				goto MENU_TUJUH;
			}
			word1 = input;
			
			goto MENU_TUJUH;
		}
		cout << endl << "  Nama: " << word1 << endl;
		
		if(num1 == 0) {
			cout  << endl << "> Umur: ";
			getline(cin, input);
			if(input == "") {
				warn = "Harap isi umur!";
				
				goto MENU_TUJUH;
			}
			try{
				num1 = stoi(input);
			} catch(exception &err) {
				warn = "Harap isi umur berupa angka!";
				num1 = 0;
				
				goto MENU_TUJUH;
			}
			if(num1 < 18) {
				warn = "Harap isi umur minimal 18 tahun!";
				num1 = 0;
				
				goto MENU_TUJUH;
			} else if(num1 > 25) {
				warn = "Harap isi umur maximal 25 tahun!";
				num1 = 0;
				
				goto MENU_TUJUH;
			}
			
			goto MENU_TUJUH;
		}
		cout << "  Umur: " << int(num1) << " Tahun" << endl;
		
		if(num2 == 0) {
			cout  << endl << "> Tinggi (cm): ";
			getline(cin, input);
			if(input == "") {
				warn = "Harap isi tinggi!";
				
				goto MENU_TUJUH;
			}
			try{
				num2 = stoi(input);
			} catch(exception &err) {
				warn = "Harap isi tinggi berupa angka!";
				num2 = 0;
				
				goto MENU_TUJUH;
			}
			if(num2 < 18) {
				warn = "Harap isi tinggi minimal 170 cm!";
				num2 = 0;
				
				goto MENU_TUJUH;
			}
			
			goto MENU_TUJUH;
		}
		cout << "  Tinggi: " << int(num2) << " cm" << endl;
		
		if(word2 == "") {
			cout  << endl << "> Gender (Wanita/Pria): ";
			getline(cin, input);
			if(input == "") {
				warn = "Harap isi gender!";
				
				goto MENU_TUJUH;
			} else if(!(input == "wanita" || input == "pria" || input == "Wanita"
					  || input == "Pria" || input == "WANITA" || input == "PRIA"
					  )) {
				
				warn = "Harap isi gender Wanita/Pria!";
				
				goto MENU_TUJUH;
			}
			word2 = input;
			
			goto MENU_TUJUH;
		}
		cout << "  Gender: " << word2 << endl;
		
		if(num3 == 0) {
			cout  << endl << "> IQ: ";
			getline(cin, input);
			if(input == "") {
				warn = "Harap isi IQ!";
				
				goto MENU_TUJUH;
			}
			try{
				num3 = stoi(input);
			} catch(exception &err) {
				warn = "Harap isi IQ berupa angka!";
				num3 = 0;
				
				goto MENU_TUJUH;
			}
			if(num3 < 80) {
				warn = "Maaf kamu dungu!";
				num3 = 0;
				
				goto MENU_TUJUH;
			}
			
			goto MENU_TUJUH;
		}
		cout << "  IQ: " << int(num3) << endl;
		
		cout << "Hasil seleksi: " << "Halo " << word1 << ", ";
		if(word2 == "wanita" || word2 == "Wanita" || word2 == "WANITA"){
			if(num2 >= 170 && num3 >= 130) {
				cout << "Selamat kamu lulus seleksi model catwalk!" << endl;
			}else {
				cout << "Maaf kamu tidak lulus seleksi model catwalk!" << endl;
			}
		} else if(word2 == "pria" || word2 == "Pria" || word2 == "PRIA"){
			if(num2 >= 175 && num3 >= 130) {
				cout << "Selamat kamu lulus seleksi model catwalk!" << endl;
			}else {
				cout << "Maaf kamu tidak lulus seleksi model catwalk!" << endl;
			}
		}
		
		cout << endl << "> Kembali ke menu utama? [Y/n]: ";
		getline(cin, input);
		if(input == "y" || input == "Y") {
			num1 = 0;
			num2 = 0;
			num3 = 0;
			word1 = "";
			word2 = "";
			
			goto MAIN_MENU_2;
		} else if(input == "n" || input == "N") {
			system("cls");
			
			return 0;
		} else {
			
			goto MENU_TUJUH;
		}
	}
	
	// MENU DELAPAN
	MENU_DELAPAN: {
		system("cls");
		cout << "=-=-= Menu Delapan =-=-=" << endl;
		cout << "  Tugas: Langganan Internet dan TV" << endl;
		if(warn != "") {
			cout << "Peringatan: " << warn << endl;
			warn = "";
		}
		
		cout << endl << "|------------------------------------|" << endl;
		cout << "|1|Paket Biasa   |25 Mbps  |Rp 250.000|" << endl;
		cout << "|2|Paket Combo   |35 Mbps  |Rp 300.000|" << endl;
		cout << "|3|Paket Super   |50 Mbps  |Rp 500.000|" << endl;
		cout << "|4|Paket Premium |100 Mbps |Rp 750.000|" << endl;
		cout << "|-----------------------------------|" << endl;
		
		if(word1 == "") {
			cout << endl << "> Pilih Paket 1-4: ";
			getline(cin, input);
			if(input == "") {
				warn = "Harap pilih paket";
				
				goto MENU_DELAPAN;
			}
			
			try{
				num1 = stoi(input);
				num1 = 0;
			} catch(exception &err) {
				warn = "Harap pilih paket berupa angka";
				
				goto MENU_DELAPAN;
			}
			word1 = input;
			
			goto MENU_DELAPAN;
		}
		cout << "  Paket: " << word1 << endl;
		
		if(num1 == 0) {
			cout << endl << "> Langganan selama (bulan): ";
			getline(cin, input);
			if(input == "") {
				warn = "Harap pilih paket";
				
				goto MENU_DELAPAN;
			}
			
			try{
				num1 = stoi(input);
			} catch(exception &err) {
				warn = "Harap pilih paket berupa angka";
				
				goto MENU_DELAPAN;
			}
			num1 = stoi(input);
			
			goto MENU_DELAPAN;
		}
		cout << "  Langganan selama: " << int(num1) << " bulan" << endl;
		
		if(word1 == "1") {
			num2 = 250000 * num1;
			if(num1 >= 3 && num1 < 12) {
				cout << endl << "Total yang harus dibayar: Rp " << num2 * 0.05 << endl;
			} else if(num1 >= 12){
				cout << endl << "Total yang harus dibayar: Rp " << num2 * 0.1 << endl;
			} else {
				cout << endl << "Total yang harus dibayar: Rp " << num2 << endl;
			}
		} else if(word2 == "2") {
			num2 = 300000 * num1;
			if(num1 >= 3 && num1 < 12) {
				cout << endl << "Total yang harus dibayar: Rp " << num2 * 0.05 << endl;
			} else if(num1 >= 12){
				cout << endl << "Total yang harus dibayar: Rp " << num2 * 0.1 << endl;
			} else {
				cout << endl << "Total yang harus dibayar: Rp " << num2 << endl;
			}
		} else if(word2 == "3") {
			num2 = 500000 * num1;
			if(num1 >= 3 && num1 < 12) {
				cout << endl << "Total yang harus dibayar: Rp " << num2 * 0.05 << endl;
			} else if(num1 >= 12){
				cout << endl << "Total yang harus dibayar: Rp " << num2 * 0.1 << endl;
			} else {
				cout << endl << "Total yang harus dibayar: Rp " << num2 << endl;
			}
		} else if(word2 == "4") {
			num2 = 750000 * num1;
			if(num1 >= 3 && num1 < 12) {
				cout << endl << "Total yang harus dibayar: Rp " << num2 * 0.05 << endl;
			} else if(num1 >= 12){
				cout << endl << "Total yang harus dibayar: Rp " << num2 * 0.1 << endl;
			} else {
				cout << endl << "Total yang harus dibayar: Rp " << num2 << endl;
			}
		}
		
		cout << endl << "> Kembali ke menu utama? [Y/n]: ";
		getline(cin, input);
		if(input == "y" || input == "Y") {
			num1 = 0;
			num2 = 0;
			word1 = "";
			
			goto MAIN_MENU_2;
		} else if(input == "n" || input == "N") {
			system("cls");
			
			return 0;
		} else {
			
			goto MENU_DELAPAN;
		}
	}
	
	// MENU SEMBILAN
	MENU_SEMBILAN: {
		system("cls");
		cout << "=-=-= Menu Sembilan =-=-=" << endl;
		cout << "  Tugas: Menampilkan Diamond dari Looping" << endl;
		if(warn != "") {
			cout << "Peringatan: " << warn << endl;
			warn = "";
		}
		
		if(num1 == 0) {
			cout  << endl << "> N: ";
			getline(cin, input);
			if(input == "") {
				warn = "Harap isi N!";
				
				goto MENU_SEMBILAN;
			}
			try{
				num1 = stoi(input);
			} catch(exception &err) {
				warn = "Harap isi N berupa angka!";
				num1 = 0;
				
				goto MENU_SEMBILAN;
			}
			if(num1 < 1) {
				warn = "Harap isi N minimal 1!";
				num1 = 0;
				
				goto MENU_SEMBILAN;
			}
			
			goto MENU_SEMBILAN;
		}
		cout << endl << "  N: " << num1 << endl;
		
		cout << "Hasil: " << endl << endl;
		for(int i = 1; i <= num1; i++) {
			for(int j = num1; j > i; j--) {
				cout << " ";
			}
			for(int k = 1; k <= i; k++) {
				cout << "*";
			}
			for(int l = 1; l <= i - 1; l++) {
				cout << "*";
			}
			cout << endl;
		}
		for(int i = 1; i <= num1;  i++) {
			for(int j = 1; j <= i; j++){
				cout << " ";
			}
			for(int k = num1 - 1; k >= i; k--) {
				cout << "*";
			}
			for(int m = num1 - 2; m >= i; m--) {
				cout << "*";
			}
			cout << endl;
		}
		
		cout << endl << "> Kembali ke menu utama? [Y/n]: ";
		getline(cin, input);
		if(input == "y" || input == "Y") {
			num1 = 0;
			
			goto MAIN_MENU_2;
		} else if(input == "n" || input == "N") {
			system("cls");
			
			return 0;
		} else {
			
			goto MENU_SEMBILAN;
		}
	}
	
	// MENU SEMBILAN
	MENU_SEPULUH: {
		system("cls");
		cout << "=-=-= Menu Sepuluh =-=-=" << endl;
		cout << "  Tugas: Menampilkan Diamond dari Looping" << endl;
		if(warn != "") {
			cout << "Peringatan: " << warn << endl;
			warn = "";
		}
		
		if(word1 == "") {
			cout << endl << "> Nama Pegawai: ";
			getline(cin, input);
			if(input == "") {
				warn = "Maaf, Nama pegawai tidak boleh kosong!";
			
				goto MENU_SEPULUH;
			} else if(input.length() < 3) {
				warn = "Maaf, Nama pegawai minimal 3 karakter!";
			
				goto MENU_SEPULUH;
			}
			word1 = input;
			
			goto MENU_SEPULUH;
		}
		cout << endl << "  Nama Pegawai: " << word1 << endl;
		
		if(num1 == 0)  {
			cout << endl << "> NIP: ";
			getline(cin, input);
			if(input == "") {
				warn = "Maaf, Mohon isi NIP dengan benar!";
			
				goto MENU_SEPULUH;
			}
			try{
				num1 = stoi(input);
			} catch(exception &err) {
				warn = "Maaf, Mohon isi NIP dengan benar!";
				num1 = 0;
			
				goto MENU_SEPULUH;
			}
			if(num1 < 0) {
				warn = "Maaf, Mohon isi NIP dengan benar!";
				num1 = 0;
				
				goto MENU_SEPULUH;
			}
			
			goto MENU_SEPULUH;
		}
		cout << "  NIP: " << int(num1) << endl;
		
		if(num2 == 0) {
			cout << endl << "> Jam Masuk: ";
			getline(cin, input);
			if(input == "") {
				warn = "Maaf, Mohon isi Jam Masuk dengan benar!";
			
				goto MENU_SEPULUH;
			}try{
				num2 = stoi(input);
			} catch(exception &err) {
				warn = "Maaf, Mohon isi Jam Masuk dengan benar!";
				num2 = 0;
			
				goto MENU_SEPULUH;
			}
			if(num2 <= 0) {
				warn = "Maaf, Mohon isi Jam Masuk dengan benar!";
				num2 = 0;
			
				goto MENU_SEPULUH;
			}
			
			goto MENU_SEPULUH;
		}
		cout << "  Jam Masuk: " << num2 << endl;
		
		if(num2 >= 0 && num2 <= 7) {
			num2 = 7;
		} else if(num2 >= 13) {
			num2 = 15;
		}
		num3 = 17.00 - num2;
		cout << endl << "Hasil: " << word1 << ", Total jam kerja anda hari ini adalah " << num3 << " Jam." << endl;
		cout << "Maka honor anda hari ini adalah Rp. " << num3*80000 << ",00.";
		
		cout << endl << "> Kembali ke menu utama? [Y/n]: ";
		getline(cin, input);
		if(input == "y" || input == "Y") {
			num1 = 0;
			num2 = 0;
			num3 = 0;
			word1 = "";
			
			goto MAIN_MENU_2;
		} else if(input == "n" || input == "N") {
			system("cls");
			
			return 0;
		} else {
			
			goto MENU_SEPULUH;
		}
	}
	
	// MENU SEBELAS
	MENU_SEBELAS: {
		system("cls");
		cout << "=-=-= Menu Sebelas =-=-=" << endl;
		cout << "  Tugas: Bilangan Prima" << endl;
		if(warn != "") {
			cout << "Peringatan: " << warn << endl;
			warn = "";
		}
		
		if(num1 == 0) {
			cout << endl << "> Nilai n: ";
			getline(cin, input);
			if(input == "") {
				warn = "Maaf, Mohon isi nilai n dengan benar!";
			
				goto MENU_SEBELAS;
			}
			try{
				num1 = stoi(input);
			} catch(exception &err) {
				warn = "Maaf, Mohon isi nilai n dengan benar!";
				num1 = 0;
			
				goto MENU_SEBELAS;
			}
			if(num1 < 0) {
				warn = "Maaf, Mohon isi nilai n dengan benar!";
				num1 = 0;
				
				goto MENU_SEBELAS;
			}
			
			goto MENU_SEBELAS;
		}
		cout << "  Nilai n: " << num1 << endl;
		
		for(int i = 1; i <= num1; i++){
			num2 = 0;
  
			for(int j = 1; j <= i; j++){
				if(i % j == 0){
					num2++;
				}
			}
			cout << "  " << i;
			if(num2 == 2) {
				cout << " <--- Bilangan Prima";
			}
			
			cout << endl;
		}
		
		cout << endl << "> Kembali ke menu utama? [Y/n]: ";
		getline(cin, input);
		if(input == "y" || input == "Y") {
			num1 = 0;
			
			goto MAIN_MENU_3;
		} else if(input == "n" || input == "N") {
			system("cls");
			
			return 0;
		} else {
			
			goto MENU_SEBELAS;
		}
	}
	
	// MENU DUA BELAS
	MENU_DUA_BELAS: {
		system("cls");
		cout << "=-=-= Menu Dua Belas =-=-=" << endl;
		cout << "  Tugas: Login Form" << endl;
		if(warn != "") {
			cout << "Peringatan: " << warn << endl;
			warn = "";
		}
		
		if(num1 < 3) {
			if(word1 == "") {
				cout << endl << "> Username: ";
				getline(cin, input);
				if(input != "RPLJuara") {
					warn = "Maaf, Username salah!";
					num1++;
				
					goto MENU_DUA_BELAS;
				}
				word1 = input;
				
				goto MENU_DUA_BELAS;
			}
			cout << endl << "  Username: " << word1 << endl;
			
			if(word2 == "") {
				cout << endl << "> Password: ";
				getline(cin, input);
				if(input != "YoYoAyo") {
					warn = "Maaf, Password salah!";
					num1++;
				
					goto MENU_DUA_BELAS;
				}
				word2 = input;
				
				goto MENU_DUA_BELAS;
			}
			cout << "  Password: *******" << endl;
			
			cout << endl << "Hasil: Login Success" << endl;
		} else {
			cout << endl << "Maaf, kesempatan anda sudah habis" << endl;
		}
		
		cout << endl << "> Kembali ke menu utama? [Y/n]: ";
		getline(cin, input);
		if(input == "y" || input == "Y") {
			num1 = 0;
			word1 = "";
			word2 = "";
			
			goto MAIN_MENU_3;
		} else if(input == "n" || input == "N") {
			system("cls");
			
			return 0;
		} else {
			
			goto MENU_DUA_BELAS;
		}
	}
	
	// MENU TIGA BELAS
	MENU_TIGA_BELAS: {
		system("cls");
		cout << "=-=-= Menu Tiga Belas =-=-=" << endl
			<< "Tugas: Bilangan terbesar dari dua bilangan menggunakan Fungsi" << endl;
		if(warn != "") {
			cout << "Peringatan : " << warn << endl;
			
			warn = "";
		}
		
		if(num1 == 0) {
			cout << endl << "> Angka pertama : ";
			getline(cin, input);
			if(input == "") {
				warn = "Maaf, Mohon isi angka dengan benar!";
			
				goto MENU_TIGA_BELAS;
			}
			try{
				num1 = stoi(input);
			} catch(exception &err) {
				warn = "Maaf, Mohon isi angka berupa nomor!";
				num1 = 0;
			
				goto MENU_TIGA_BELAS;
			}
			goto MENU_TIGA_BELAS;
		}
		cout << endl << "  Angka pertama : " << num1 << endl;
		
		if(num2 == 0) {
			cout << "> Angka kedua : ";
			getline(cin, input);
			if(input == "") {
				warn = "Maaf, Mohon isi angka dengan benar!";
			
				goto MENU_TIGA_BELAS;
			}
			try{
				num2 = stoi(input);
			} catch(exception &err) {
				warn = "Maaf, Mohon isi angka berupa nomor!";
				num2 = 0;
			
				goto MENU_TIGA_BELAS;
			}
			goto MENU_TIGA_BELAS;
		}
		cout << "  Angka kedua : " << num2 << endl;
		
		cout << "Angka terbesar adalah : " << angkaTerbesar(num1, num2) << endl;
		
		cout << endl << "> Kembali ke menu utama? [Y/n] : ";
		getline(cin, input);
		if(input == "y" || input == "Y") {
			num1 = 0;
			num2 = 0;
			num3 = 0;
			
			goto MAIN_MENU_3;
		} else if(input == "n" || input == "N") {
			system("cls");
			
			return 0;
		} else {
			
			goto MENU_TIGA_BELAS;
		}
	}
	
	// MENU EMPAT BELAS
	MENU_EMPAT_BELAS: {
		system("cls");
		cout << "=-=-= Menu Empat Belas =-=-=" << endl
			<< "Tugas: Total penjumlahan deret menggunakan Fungsi" << endl;
		if(warn != "") {
			cout << "Peringatan : " << warn << endl;
			
			warn = "";
		}
		
		if(num1 == 0) {
			cout << endl << "> n : ";
			getline(cin, input);
			if(input == "") {
				warn = "Maaf, Mohon isi n dengan benar!";
			
				goto MENU_EMPAT_BELAS;
			}
			try{
				num1 = stoi(input);
			} catch(exception &err) {
				warn = "Maaf, Mohon isi n berupa nomor!";
				num1 = 0;
			
				goto MENU_EMPAT_BELAS;
			}
			if(num1 <= 0) {
				warn = "Maaf, Mohon isi n minimal 1!";
				num1 = 0;
			
				goto MENU_EMPAT_BELAS;
			}
			goto MENU_EMPAT_BELAS;
		}
		cout << endl << "  n : " << num1 << endl;
		
		penjumlahanDeret(num1);
		
		cout << endl << "> Kembali ke menu utama? [Y/n] : ";
		getline(cin, input);
		if(input == "y" || input == "Y") {
			num1 = 0;
			
			goto MAIN_MENU_3;
		} else if(input == "n" || input == "N") {
			system("cls");
			
			return 0;
		} else {
			
			goto MENU_EMPAT_BELAS;
		}
	}
	
	// MENU LIMA BELAS
	MENU_LIMA_BELAS: {
		system("cls");
		cout << "=-=-= Menu Lima Belas =-=-=" << endl
			<< "Tugas: Penjumlahan dua bilangan menggunakan Fungsi" << endl;
		if(warn != "") {
			cout << "Peringatan : " << warn << endl;
			
			warn = "";
		}
		
		if(num1 == 0) {
			cout << endl << "> Angka pertama : ";
			getline(cin, input);
			if(input == "") {
				warn = "Maaf, Mohon isi Angka pertama dengan benar!";
			
				goto MENU_LIMA_BELAS;
			}
			try{
				num1 = stoi(input);
			} catch(exception &err) {
				warn = "Maaf, Mohon isi Angka pertama berupa nomor!";
				num1 = 0;
			
				goto MENU_LIMA_BELAS;
			}
			goto MENU_LIMA_BELAS;
		}
		cout << endl << "  Angka pertama : " << num1 << endl;
		
		if(num2 == 0) {
			cout << "> Angka kedua : ";
			getline(cin, input);
			if(input == "") {
				warn = "Maaf, Mohon isi Angka kedua dengan benar!";
			
				goto MENU_LIMA_BELAS;
			}
			try{
				num2 = stoi(input);
			} catch(exception &err) {
				warn = "Maaf, Mohon isi Angka kedua berupa nomor!";
				num2 = 0;
			
				goto MENU_LIMA_BELAS;
			}
			goto MENU_LIMA_BELAS;
		}
		cout << "  Angka kedua : " << num2 << endl;
		cout << "Hasil : " << num1 << " + " << num2 << " = "
			<< penjumlahan(num1, num2) << endl;
		
		cout << endl << "> Kembali ke menu utama? [Y/n] : ";
		getline(cin, input);
		if(input == "y" || input == "Y") {
			num1 = 0;
			num2 = 0;
			
			goto MAIN_MENU_3;
		} else if(input == "n" || input == "N") {
			system("cls");
			
			return 0;
		} else {
			
			goto MENU_LIMA_BELAS;
		}
	}
	
	return 0;
}