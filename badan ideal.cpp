#include<iostream>
#include<stdlib.h>
using namespace std;

int main( ){
	
	int ulang;
	
do{
		system("cls");
	cout<<"BERAT BADAN IDEAL"<<endl;
	cout<<"========================"<<endl;
	
	string bakhir;
	int jkelamin;
	double tinggi, berat, bideal, bmin, bmax, bpas;
	
	cout<<"pilih jenis kelamin : \n1.Laki-laki \n2.Perempuan"<<endl;
	cout<<"Pilihan = "; cin>>jkelamin;
	
	if(jkelamin == 2){
		cout<<"Tinggi badan : "; cin>>tinggi;
		cout<<"Berat badan : "; cin>>berat;
		
		bideal = (tinggi - 100) - (tinggi - 100)*15/100;	
		bmin = bideal - 2;
		bmax = bideal + 2;
		
		if(berat < bmin){
			bakhir = "KEKURUSAN"; 
		}
		else if(berat > bmax ){
			bakhir = "KELEBIHAN";
		}
		cout<<endl<<"berat badan kamu ="<<bakhir<<endl;
		cout<<"Berat ideal = "<<bmin<<" - "<<bmax;
		
	}
	else if(jkelamin == 1){
				cout<<"Tinggi badan : "; cin>>tinggi;
		cout<<"Berat badan : "; cin>>berat;
		
		bideal = (tinggi - 100) - (tinggi - 100)*10/100;	
		bmin = bideal - 2;
		bmax = bideal + 2;;
		
		if(berat < bmin){
			bakhir = "KEKURUSAN"; 
		}
		else if(berat > bmax ){
			bakhir = "KELEBIHAN";
		}
		cout<<endl<<"berat badan kamu ="<<bakhir<<endl;
		cout<<"Berat ideal = "<<bmin<<" - "<<bmax;
	}
	
	cout<<endl<<"ULANGI? \n1.ya \n2.tidak"<<endl;
	cout<<"PILIHAN : "; cin>>ulang;
}  while(ulang == 1);
	
}
