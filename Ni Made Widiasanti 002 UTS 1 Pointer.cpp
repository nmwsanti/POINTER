#include <iostream>

using namespace std;

int main()
{
     long harga=0;
     char KodeBaju, Ukuran;
     string Merk;

	//POINTER 
	
     cout<<"\t== Program Cek Harga Baju ==\n\n";
     string *w = &Merk;
     char *x = &Ukuran;
     char *y = &KodeBaju;
     long *z = &harga;

     cout << "Masukkan Kode Baju   : ";
     cin  >> KodeBaju;
     cout << "Alamat Kode Baju : " << &y;

     cout <<"Masukkan Ukuran Baju : ";
     cin  >> Ukuran;
     cout << "Alamat Ukuran Baju : " << &x;
    

     if(KodeBaju=='1'){
          Merk="Nevada";
          if(Ukuran=='S' || Ukuran=='s'){
               harga=200000;
          }
          else if(Ukuran=='M' || Ukuran=='m'){
               harga=220000;
          }
          else{
               harga=250000;
          }
     }
     else if(KodeBaju=='2'){
          Merk="Connexion";
          if(Ukuran=='S' || Ukuran=='s'){
               harga=150000;
          }
          else if(Ukuran=='M' || Ukuran=='m'){
               harga=160000;
          }
          else{
               harga=170000;
          }
     }
     else if(KodeBaju=='3'){
          Merk="St YVes";
          if(Ukuran=='S' || Ukuran=='s'){
               harga=200000;
          }
          else if(Ukuran=='M' || Ukuran=='m'){
               harga=200000;
          }
          else{
               harga=200000;
          }
     }
     else if(KodeBaju=='4'){
          Merk="Uniqlo";
          if(Ukuran=='S' || Ukuran=='s'){
               harga=300000;
          }
          else if(Ukuran=='M' || Ukuran=='m'){
               harga=300000;
          }
          else{
               harga=350000;
          }
     }
     else if(KodeBaju=='5'){
          Merk="This is April";
          if(Ukuran=='S' || Ukuran=='s'){
               harga=100000;
          }
          else if(Ukuran=='M' || Ukuran=='m'){
               harga=120000;
          }
          else{
               harga=130000;
          }
     }
     else{
          Merk="Error";
          cout<<"\n== Salah Input Kode Baju ==";
     }

     cout<<"\n\nMerek Baju  = "<< *w;
     cout<<"\nUkuran Baju = "<< *x;
     cout<<"\n\Kode Baju  = "<< *y;
     cout<<"\nHarga Baju  = "<< *z;

     return 0;
}
