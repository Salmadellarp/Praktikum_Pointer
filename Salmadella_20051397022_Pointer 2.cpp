#include<iostream>
#include<sstream>

using namespace std;

int main(int argc, char *argv[])
{
	string k = "=======================================================";
	cout << "						HALLO						" <<endl;
	const int uk_array = 5;
	int nilai_maks = 0;
	string namar;
	string array [uk_array][2];
	string kategori;
	
	for (int i = 0; i<= uk_array-1; i++ )
	{
		cout << k << endl;
		cout << "Nilai ke-" << i+1 <<endl;
		cout << "Masukkan Nama	: ";
		cin >> *(*(array+i)+0);
		cout << "Masukkan Nilai	: ";
		cin >> *(*(array+i)+1);
		cout << endl;	
	}
	
	cout << endl << "Kategorisasi Nilai" << endl << k << endl;
	
	for (int r=0; r<= uk_array-1; r++ )
	{
		string nama = *(*(array+r)+0);
		istringstream ss(*(*(array+1)+1));
		int nilai;
		ss >> nilai;
		if (nilai >=90 && nilai <=100){
			kategori ="A";
		}
		
	else if (nilai >=80 && nilai <=90){
		kategori ="B";
	}
	else if (nilai >=70 && nilai <=80){
		kategori ="C";
	}
	else if (nilai >=60 && nilai <=70){
		kategori ="D";
	}
	else if (nilai >=50 && nilai <=60){
		kategori ="E";
	}
	else if (nilai <50){
		kategori =" Tidak Lulus";
	}
	
	
	cout << endl << endl << k << endl << "Nama	:" << nama << endl << "Nilai	:" << nilai << endl << "Kategori Nilai	:" << kategori << endl;
	if (nilai > nilai_maks){
		nilai_maks = nilai;
		namar = nama;
	}
	}
	
	cout << endl << k << endl << "Nilai Maksimum	:" << nilai_maks << endl << "Oleh	:" << namar << endl << k << endl;
	
	cout << "						TERIMA KASIH						" <<endl;	
}
