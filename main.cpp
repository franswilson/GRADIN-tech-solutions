#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
   string nama[10],region[10];
   int jum,jkerja[10],level[10];
   int bonus[10],bonus_level[10]
   ,gapok[10],gajibersih[10],tunjangan_region[10];

   cout<<"Masukan Jumlah Pegawai  : ";
   cin>>jum;
   cout<<endl;

   for (int i=1;i<=jum;i++){
    cout<<"PEGAWAI KE-"<<i<<endl;
	cout<<"Masukan Nama                        : ";
	cin>>nama[i];
	cout<<"Masukan gaji pokok / bulan          : ";
	cin>>gapok[i];
    cout<<"Masukan region                      : ";
	cin>>region[i];
	cout<<"Masukan level                       : ";
	cin>>level[i];


	if (gapok[i]>7000000){
	    bonus[i]=gapok[i]*10/100;
	}else if(gapok[i]<7000000){
	    bonus[i]=gapok[i]*20/100;
	}else if(gapok[i]>4000000){
	    bonus[i]=gapok[i]*20/100;
	}else if(gapok[i]<4000000){
	    bonus[i]=gapok[i]*40/100;
	}
	else{
	     bonus[i]=0;
	}



    if (region,"asia"){
        tunjangan_region[i] =0.02 * gapok[i] ;
	 }
    else if (region,"eropa"){
        tunjangan_region[i] =0.025 * gapok[i] ;
    }else if (region,"nort eropa"){
        tunjangan_region[i] =0.4 * gapok[i] ;
    }



    if(level[i]==1){
        bonus_level[i]=200000;
    }else if(level[i]==2){
        bonus_level[i]=500000;
    }



	gajibersih[i]=((gapok[i]+bonus[i]+level[i])-tunjangan_region[i]);
	cout<<endl;
    }

	cout<<"MENGHITUNG GAJI PEGAWAI"<<endl;
    cout<<endl;
	for (int i=1;i<=jum;i++){

		cout<<"     PEGAWAI KE-"<<i<<endl;
		cout<<"Nama                 : "<<nama[i]<<endl;
		cout<<"Gaji Pokok           :Rp. "<<gapok[i]<<endl;
        cout<<"Bonus                :Rp. "<<bonus[i]<<endl;
        cout<<"Pajak region         :Rp. "<<tunjangan_region[i]<<endl;
        cout<<"Bonus level          :Rp. "<<bonus_level[i]<<endl;
        cout<<"Gaji bersih          :Rp. "<<gajibersih[i]<<endl;
		cout<<endl<<endl;
	}
}


/*int main ()
{
    int i,b,x;

    cout<<"Masukkan banyak data : ";
    cin>>x;

    for(i=1;i<=x;i++)
    {
        for(int j=x;j>=i;j--){
            cout<<j;
        }cout<<endl;

    }
}*/

/*
int main(){

int r,l,a,p,t;
char u;
int ul;

do{
    cout<<"1. Luas lingkaran "<<endl;
    cout<<"2. Luas persegi panjang "<<endl;
    cout<<"3. Luas segitiga "<<endl;
    cout<<"pilih rumus =";
    cin>>ul;
    cout<<"============================"<<endl;
    switch(ul)
    {
    case 1:

    cout<<"masukkan jari-jari lingkaran =";
    cin>>r;

        l=3.14*r*r;

    cout<<"luaslingkaran adalah="<<l<<endl;
    cout<<"Masih Ada Yang Lain Y/T : ";
    cin>>u;
    break;

    case 2:

    cout<<"masukkan panjang =";
    cin>>p;
    cout<<"masukkan lebar =";
    cin>>a;
        l=p*a;

    cout<<"luas persegi panjang adalah="<<l<<endl;
    cout<<"Masih Ada Yang Lain Y/T : ";
    cin>>u;
    break;

    case 3:
    cout<<"masukkan alas segitiga=";
    cin>>a;
    cout<<"masukkan tinggi segitiga =";
    cin>>t;

        l=0.5*a*t;

    cout<<"luas segitiga adalah="<<l<<endl;
    cout<<"Ingin mengitung lagi ?? Y/T = ";
    cin>>u;
    break;
    }
   } while (u/='Y');
    cout<<"----";
    return 0;
}*/



