#include <iostream>

using namespace std;

int main ()
{
	float a, b, tambah, kurang, bagi, kali;
	cout<<"PROGRAM KALKULATOR"<<endl<<endl;
	cout<<"Masukkan angka pertama = ";
	cin>>a;
	cout<<"Masukkan angka kedua = ";
	cin>>b;
	tambah=a+b;
	kurang=a-b;
	bagi=a/b;
	kali=a*b;
	cout<<endl<<endl;
	cout<<"(Pertambahan)	"<<a<<" + "<<b<<" = "<<tambah<<endl;
	cout<<"(Pengurangan)	"<<a<<" - "<<b<<" = "<<kurang<<endl;
	cout<<"(Pembagian)	"<<a<<" : "<<b<<" = "<<bagi<<endl;
	cout<<"(Perkalian)	"<<a<<" x "<<b<<" = "<<kali<<endl;
	
	return 0;
}
