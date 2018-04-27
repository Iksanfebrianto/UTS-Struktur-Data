#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct data{
char kode[20],nama[50],jumlah[20];};
data batas[100];
int a,b,c,d;

void inputdata()
{
    cout<<"\nJumlah Data Yang Akan diinput : ";cin>>b;
    d=0;
    for(c=0;c<b;c++){
    d=d+1;
    cout<<"\nData ke-"<<d<<endl;
    cout<<"KODE\t: ";cin>>batas[a].kode;
    cout<<"Nama\t: ";cin>>batas[a].nama;
    cout<<"Jumlah\t: ";cin>>batas[a].jumlah;
    a++;
    }
}



void lihatdata()
{int i,j;
 cout<<"\n================================Menampilkan Data===============================\n\n";
 cout<<"===============================================================================\n";
 cout<<"||\tNO\t||\tKODE\t||\tNama\t\t||\tJumlah\t||\n";
 j=0;
 for(i=0;i<a;i++)
 {j=j+1;
  cout<<"===============================================================================\n";
  cout<<"||\t"<<j<<"\t||";
  cout<<batas[i].kode<<"\t||";
  cout<<batas[i].nama<<"\t\t\t||";
  cout<<batas[i].jumlah<<"\t\t||";cout<<endl;
  }
  cout<<"=============================================================================== ";getch();
  }

void hapusdata()
{int x,y;
 cout<<"Hapus data ke-";cin>>x;
 y=x-1;
 a--;
 for(int i=y;i<a;i++)
 {batas[i]=batas[i+1];}
 cout<<"\n\n\n\n\n\n\n\n\n++++++++++++++++++++++++++++++ Data ke-"<<x<<" Terhapus ++++++++++++++++++++++++++++++";
 getch();
}

void editdata(){
int k,l;
cout<<"Masukan Data yang akan diedit : ";cin>>k;
l=k-1;
cout<<"Kode\t: ";cin>>batas[l].kode;
cout<<"Nama\t: ";cin>>batas[l].nama;
cout<<"Jumlah\t: ";cin>>batas[l].jumlah;
lihatdata();
}

int main()
{     int pilih;
 char w;
 cout<<"\n\n\n\n\n===========================PROGRAM INVENTARIS BARANG=============================";
 cout<<"\n\t\t\t     PROGRAM BY : ";
 cout<<"\n\t\t\t     FANJI RAFANSYAH (17053039)";
 cout<<"\n\t\t\t     M. IQBAL FIRDIANSYAH (17053054)";
 cout<<"\n\t\t\t     IKSAN FEBRIANTO (17053027)";
 cout<<"\n\n\t\t\t   PUSH ENTER TO CONTINUE";
 getch();
  awal:
  cout<<"\n================================ PILIHAN MENU =================================";
  cout<<"\n1. Masukkan data";
  cout<<"\n2. Hapus Data";
  cout<<"\n3. Lihat Data";
  cout<<"\n4. Edit Data";
  cout<<"\n5. Keluar";
  cout<<"\n\nMasukkan Pilihan : ";
  cin>>pilih;
  if(pilih==1)
   {inputdata();goto awal;}
  if(pilih==2)
   {hapusdata();goto awal;}
  if(pilih==3)
   {lihatdata();goto awal;}
  if(pilih==4)
   {editdata();goto awal;}
  if(pilih==5)
   {
    cout<<"\n\n\n\n\n\n\n\n                     APAKAH ANDA YAKIN KELUAR DARI PROGRAM??\n\n";
    cout<<"                         [Y]                         [N]                  \n"<<endl;
    cout<<"                                         ";cin>>w;
    if(w=='y'||w=='Y')
    {
     cout<<"\n\n\n\n\n******************************* PROGRAM SELESAI *******************************";}
    if(w=='n'||w=='N')
           {goto awal;}}
  else
   {cout<<"Pilihan 1-5";getch();goto awal;}
}
