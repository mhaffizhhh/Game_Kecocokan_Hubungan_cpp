#include <iostream>

using namespace std;
int main(){
	/*NAMA PROGRAM PERMAINAN_KECOCOKAN_HUBUNGAN
	DEKLARASI*/
	int pilih;
	float len1,len2,i,konsonan1,konsonan2,vokal1,vokal2;
	string nama1,nama2;
	
	//ALGORITMA
	cout<<"	     ||===============================||"<<endl;
	cout<<"	     ||SEBERAPA COCOK ANDA DENGAN DIA?||"<<endl;
	cout<<"	     ||-------------------------------||"<<endl;
	cout<<"	     || Oleh: Mohammad Hafizh Efridas ||"<<endl;
	cout<<"	     ||           2200856             ||"<<endl;
	cout<<"	     ||        Matematika 2D          ||"<<endl;
	cout<<"	     ||===============================||"<<endl;
	
	cout<<""<<endl;
	
	//INPUT NAMA PERTAMA
	cout<<"		    Masukkan Nama Pertama: "<<endl;
	cout<<"		   >> ";std::getline(cin,nama1);

	//MENGHITUNG PANJANG NAMA PERTAMA TANPA SPASI
	len1=nama1.length();
	
	vokal1=konsonan1=0;
	
	for (i=0;i<len1;i++){
		//MENGHITUNG BANYAK HURUF VOKAL NON KAPITAL PADA NAMA PERTAMA
		if ((nama1[i]=='a') or (nama1[i]=='i') or (nama1[i]=='u') or (nama1[i]=='e') or (nama1[i]=='o')){
			vokal1=vokal1+1 ;
		}
		//MENGHITUNG BANYAK HURUF VOKAL KAPITAL PADA NAMA PERTAMA
		else if ((nama1[i]=='A') or (nama1[i]=='I') or (nama1[i]=='U') or (nama1[i]=='E') or (nama1[i]=='O')){
			vokal1=vokal1+1;
		}
		//MENGHITUNG BANYAK HURUF KONSONAN PADA NAMA PERTAMA
		else{
			if (nama1[i]!=' '){
				konsonan1=konsonan1+1;
			}
		}
	}
	
	//INPUT NAMA KEDUA
	cout<<""<<endl;
	cout<<"		     Masukkan Nama Kedua: "<<endl;
	cout<<"		   >> ";std::getline(cin,nama2);
	
	//MENGHITUNG PANJANG NAMA KEDUA TANPA SPASI
	len2=nama2.length();
	
	vokal2=konsonan2=0;
	
	for (i=0;i<len2;i++){
		//MENGHITUNG BANYAK HURUF VOKAL NON KAPITAL PADA NAMA KEDUA
		if ((nama2[i]=='a') or (nama2[i]=='i') or (nama2[i]=='u') or (nama2[i]=='e') or (nama2[i]=='o')){
			vokal2=vokal2+1;
		}
		//MENGHITUNG BANYAK HURUF VOKAL KAPITAL PADA NAMA KEDUA
		else if ((nama2[i]=='A') or (nama2[i]=='I') or (nama2[i]=='U') or (nama2[i]=='E') or (nama2[i]=='O')){
			vokal2=vokal2+1;
		}
		//MENGHITUNG BANYAK HURUF KONSONAN PADA NAMA KEDUA
		else{
			if(nama2[i]!=' '){
				konsonan2=konsonan2+1;
			}
		}
	}
	
	cout<<""<<endl;
	
	cout<<"		      KECOCOKAN SEBAGAI:"<<endl;
	
	cout<<"		        ==> 1. Pasangan"<<endl;//BERDASARKAN PERBANDINGAN PANJANG NAMA 
	cout<<"		        ==> 2. Teman"<<endl;//BERDASARKAN PERBANDINGAN BANYAK HURUF VOKAL
	cout<<"		        ==> 3. Sahabat"<<endl;//BERDASARKAN PERBANDINGAN BANYAK HURUF KONSONAN
	
	cout<<""<<endl;
	
	cout<<"		       Pilihan anda: ";cin>>pilih;
	
	cout<<""<<endl;
	
	//MEMINTA USER UNTUK MEMASUKKAN PILIHAN ANGKA SESUAI DENGAN YANG DISEDIAKAN JIKA SEBELUMNYA SALAH MEMILIH
	while ((pilih>3) or (pilih<1)){
		cout<<"		   PILIHAN TIDAK TERSEDIA!!!"<<endl;
		cout<<"		   -------------------------"<<endl;
		cout<<""<<endl;
		
		cout<<"		      KECOCOKAN SEBAGAI:"<<endl;
		
		cout<<"		        ==> 1. Pasangan"<<endl;
		cout<<"		        ==> 2. Teman"<<endl;
		cout<<"		        ==> 3. Sahabat"<<endl;
		
		cout<<""<<endl;
		cout<<"		   Silahkan pilih kembali: ";cin>>pilih;
		cout<<""<<endl;
	}
	

	//JIKA USER MEMILIH ANGKA 1
	if(pilih==1){
		//PERRCABANGAN AGAR OUTPUT PERSENTASE TIDAK LEBIH DARI 100%
		if(len1>len2){
			float(persentase1)=(len2/len1)*100;
			cout<<"		     Persentase kecocokan"<<endl;
			cout<<"		     '"<<nama2<<"'"<<endl;
			cout<<"			   dengan"<<endl;
			cout<<"		     '"<<nama1<<"'"<<endl;
			cout<<"		    sebagai PASANGAN = "<<int(persentase1)<<"%"<<endl;
		}
		else{
			float(persentase2)=(len1/len2)*100;
			cout<<"		     Persentase kecocokan"<<endl;
			cout<<"		     '"<<nama1<<"'"<<endl;
			cout<<"			   dengan"<<endl;
			cout<<"		     '"<<nama2<<"'"<<endl;
			cout<<"		    sebagai PASANGAN = "<<int(persentase2)<<"%"<<endl;
		}
	}
	//JIKA USER MEMILIH ANGKA 2
	else if(pilih==2){
		//PERCABANGAN AGAR OUTPUT PERSENTASE TIDAK LEBIH DARI 100%
		if(vokal1>vokal2){
			float(persentase1)=(vokal2/vokal1)*100;
			cout<<"		     Persentase kecocokan"<<endl;
			cout<<"		     '"<<nama2<<"'"<<endl;
			cout<<"			   dengan"<<endl;
			cout<<"		     '"<<nama1<<"'"<<endl;
			cout<<"		     sebagai TEMAN = "<<int(persentase1)<<"%"<<endl;
		}
		//JIKA KEDUA NAMA TIDAK MEMUAT HURUF VOKAL
		else if((vokal1==0) and (vokal2==0)){
			cout<<"		     Persentase Kecocokan"<<endl;
			cout<<"		     '"<<nama1<<"'"<<endl;
			cout<<"			   dengan"<<endl;
			cout<<"		     '"<<nama2<<"'"<<endl;
			cout<<"		     sebagai TEMAN = 0%"<<endl;
		}
		else{
			float(persentase2)=(vokal1/vokal2)*100;
			cout<<"		     Persentase kecocokan"<<endl;
			cout<<"		     '"<<nama1<<"'"<<endl;
			cout<<"			   dengan"<<endl;
			cout<<"		     '"<<nama2<<"'"<<endl;
			cout<<"		     sebagai TEMAN = "<<int(persentase2)<<"%"<<endl;
		}
	}
	//JIKA USER MEMILIH ANGKA 3
	else{
		//PERCABANGAN AGAR OUTPUT PERSENTASE TIDAK LEBIH DARI 100%
		if(konsonan1>konsonan2){
			float(persentase1)=(konsonan2/konsonan1)*100;
			cout<<"		     Persentase kecocokan"<<endl;
			cout<<"		     '"<<nama2<<"'"<<endl;
			cout<<"			   dengan"<<endl;
			cout<<"		     '"<<nama1<<"'"<<endl;
			cout<<"		    sebagai SAHABAT = "<<int(persentase1)<<"%"<<endl;
		}
		//JIKA KEDUA NAMA TIDAK MEMUAT HURUF KONSONAN
		else if((konsonan1==0) and (konsonan2==0)){
			cout<<"		     Persentase kecocokan"<<endl;
			cout<<"		     '"<<nama1<<"'"<<endl;
			cout<<"			   dengan"<<endl;
			cout<<"		     '"<<nama2<<"'"<<endl;
			cout<<"		    sebagai SAHABAT = 0%"<<endl;
		}
		else{
			float(persentase2)=(konsonan1/konsonan2)*100;
			cout<<"		     Persentase kecocokan"<<endl;
			cout<<"		     '"<<nama1<<"'"<<endl;
			cout<<"			   dengan"<<endl;
			cout<<"		     '"<<nama2<<"'"<<endl;
			cout<<"		    sebagai SAHABAT = "<<int(persentase2)<<"%"<<endl;
		}
	}
	
	
	cout<<""<<endl;
	cout<<"		==============================="<<endl;
	cout<<"		     Akhir Dari Permainan"<<endl;
	cout<<"			  Terimakasih"<<endl;
	
	return 0;
}
