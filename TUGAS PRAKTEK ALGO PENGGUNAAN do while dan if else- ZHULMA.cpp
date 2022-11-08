#include <iostream>
using namespace std;

int main (){
	int pilihan, jml_barang, harga, total, bayar, diskon;
	string item;
	
	cout << "          INDOKTOBER                 "<< endl;
	cout << "    UNIVERSITAS NEGERI PADANG        "<< endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
	cout << "              DAFTAR MENU            "<< endl;
	cout << "1. Permen Milkita : Rp.5000 " << "  6.Minyak telon : Rp.37.000" << endl;
	cout << "2. Susu Ultramilk : Rp.8000 " << "  7.Mochi Ice    : Rp.20.000" << endl;
	cout << "3. Choholatoz     : Rp.9000 " << "  8.Susu Dancow  : Rp.40.000" << endl;
	cout << "4. Cimory yoghurt : Rp.8000 " << "  9.Minyak wangi : Rp.95.000" << endl;
	cout << "5. Tisue jolly    : Rp.7000 " << "  10.Selesai" << endl;
	cout << "=============================================================="<< endl << endl;
	
	do{
	   cout << "Masukkan no pilihan : ";
	   cin  >> pilihan;
	   
	   switch(pilihan){
	   	case 1 :
	   		item  = "Permen Milkita";
	   		harga = 5000;
	   		cout  << "jumlah barang : ";
	   		cin   >> jml_barang;
	   		cout  << jml_barang << " " << item << " = Rp. " << harga * jml_barang << endl <<endl;
	   		total += harga * jml_barang;
			break;
	   	case 2 :
	   		item  = "Susu Ultramilk";
	   		harga = 8000;
	   		cout  << "jumlah barang : ";
	   		cin   >> jml_barang;
	   		cout  << jml_barang << " " << item << " = Rp. " << harga * jml_barang << endl <<endl;
	   		total += harga * jml_barang;
			break;
	   	case 3 :
	   		item  = "Choholatoz";
	   		harga = 9000;
	   		cout  << "jumlah barang : ";
	   		cin   >> jml_barang;
	   		cout  << jml_barang << " " << item << " = Rp. " << harga * jml_barang << endl << endl;
	   		total += harga * jml_barang;
			break;
	   	case 4 :
	   		item  = "Cimory Yoghurt";
	   		harga = 8000;
	   		cout  << "jumlah barang : ";
	   		cin   >> jml_barang;
	   		cout  << jml_barang << " " << item << " = Rp. " << harga * jml_barang << endl << endl;
	   		total += harga * jml_barang;
			break;
	   	case 5 :
	   		item  = "Tisue Jolly";
	   		harga = 7000;
	   		cout  << "jumlah barang : ";
	   		cin   >> jml_barang;
	   		cout  << jml_barang << " " << item << " = Rp. " << harga * jml_barang << endl << endl;
	   		total += harga * jml_barang;
			break;
	   	case 6 :
	   		item  = "Minyak Telon";
	   		harga = 37000;
	   		cout  << "jumlah barang : ";
	   		cin   >>jml_barang;
	   		cout  << jml_barang << " " << item << " = Rp. " << harga * jml_barang << endl << endl;
	   		total += harga * jml_barang;
			break;
	   	case 7 :
	   		item  = "Mochi Ice";
	   		harga = 20000;
	   		cout  << "jumlah barang : ";
	   		cin   >> jml_barang;
	   		cout  << jml_barang << " " << item << " = Rp. " << harga * jml_barang << endl << endl;
	   		total += harga * jml_barang;
			break;
	   	case 8 :
	   		item  = "Susu Dancow";
	   		harga = 40000;
	   		cout  << "jumlah barang : ";
	   		cin   >> jml_barang;
	   		cout  << jml_barang << " " << item << " = Rp. " << harga * jml_barang << endl << endl;
	   		total += harga * jml_barang;
			break;
	   	case 9 :
	   		item  = "Minyak Wangi";
	   		harga = 95000;
	   		cout  << "jumlah barang : ";
	   		cin   >> jml_barang;
	   		cout  << jml_barang << " " << item << " = Rp. " << harga * jml_barang << endl << endl;
	   		total += harga * jml_barang;
			break;
	   	case 10:
	   		cout << endl << endl;
			cout << "jumlah Bayar :  " << total << endl; 
			
			if(total >= 100000){
				diskon = 0.06 * total;	
			}	else if (total >= 50000){
				diskon = 0.04 * total;
			}   else if (total<=50000){
				diskon = 0.02 * total;
			}   else {
				diskon = 0;
			}   
			cout << "Diskon : " << diskon << endl;
			cout << "Total bayar : " << total - diskon << endl;
			cout << "Bayar : ";
			cin >> bayar;
			cout << "Kembali :" << (bayar - (total -diskon)) << endl << endl;
			break;
			cout << "Pilihan Anda salah "<< endl;
			break;
			
				
			
	   	default :
	   		cout << "Pilihan Anda Salah!" << endl;
	   		break;
	   }
	} while ( pilihan != 10);	
	cout << "Terima Kasih" << endl;
}
