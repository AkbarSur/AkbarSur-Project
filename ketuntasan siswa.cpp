#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	
	cout<<"ketuntasan siswa"<<endl;
	cout<<"======================="<<endl<<endl;
	
	string nama, tuntas;
	double nilaisiswa, kkm;
	kkm = 75;
	cout<<"Nama siswa\t \t : ";
	getline(cin, nama);
	cout<<"masukkan nilai siswa\t : "; cin>>nilaisiswa;
	system("cls");
	
	if(nilaisiswa >= kkm){
		tuntas = "tuntas";
	} else {
		tuntas = "tidak tuntas";
	}
	
	cout<<"ketuntasan siswa"<<endl;
	cout<<"======================="<<endl<<endl;
	cout<<"Nama \t\t\t: "<<nama<<endl;
	cout<<"nilai \t\t\t: "<<nilaisiswa<<endl;
	cout<<"siswa dinyatakan \t: "<<tuntas<<endl;
	
	
	
	
	
	
	
}
