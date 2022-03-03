#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

//Compiler version g++ 6.3.0

//void
void penjumlahan (float num1, float num2)
  {
    float hasil;
    hasil = num1+num2;
    cout<<num1<<" + "<<num2<<" = "<<hasil;
  }
void pengurangan (float num1, float num2)
  {
    float hasil;
    hasil = num1-num2;
    cout<<num1<<" - "<<num2<<" = "<<hasil;
  }
void pembagian (float num1, float num2)
  {
    float hasil;
    hasil = num1/num2;
    cout<<num1<<" : "<<num2<<" = "<<hasil;
  }
void perkalian (float num1, float num2)
  {
    float hasil;
    hasil = num1*num2;
    cout<<num1<<" x "<<num2<<" = "<<hasil;
  }
void modulusuy (int num1, int num2)
  {
    int hasil;
    hasil = num1%num2;
    cout<<num1<<" % "<<num2<<" = "<<hasil;
  }
  

//DIMANA PROGRAM DIMULAI

int main()
{
   //Deklarasi
   float num1, num2, hasil;
   int oprt;
   char x, H;
   
    string t = "Masukkan ";
    string m1 = "Masukkan num1: ";
    string m2 = "Masukkan num2: ";
    
    //TABEL OPERATOR
    kembalioprt:
    cout<<".____________________.\n";
    cout<<"|___TABEL OPERATOR___|\n";
    cout<<"|   1. Penjumlahan   |\n";
    cout<<"|   2. Pengurangan   |\n";
    cout<<"|   3. Pembagian     |\n";
    cout<<"|   4. Perkalian     |\n";
    cout<<"|   5. Modulus       |\n";
    cout<<"|____________________|\n";
    
      //MEMASUKKAN OPERATOR
      cout<<t<<"operator = ";
      cin>>oprt;
      
      switch (oprt)
      {
        case 1:cout<<"\n\n";
                break;
        case 2:cout<<"\n\n";
                break;
        case 3:cout<<"\n\n";
                break;
        case 4:cout<<"\n\n";
                break;
        case 5:cout<<"\n\n";
        		break;
        default:system("cls");
				cout<<"input yang kamu masukkan salah!!\n\n";
                goto kembalioprt;
      }
      
      pertanyaan_oprt:
      //MENGGANTI OPERATOR?Y/N
      cout<<"Ingin mengganti operator?(y/n)";
      cin>>x;
      switch (x)
      {  
        case 'y': system("cls");
				  cout<<"\nKembali ke pemilihan operator\n\n";
                  goto kembalioprt;
                  break;
        case 'n': cout<<"\n";
                  break;
         default: cout<<"\ninput yang anda masukkan salah!!\n\n";
         		  system("cls");
                  goto pertanyaan_oprt;
                  break;
      }
        
      //MEMASUKKAN ANGKA NUM1 DAN NUM2
      cout<<m1;
      cin>>num1;
      cout<<m2;
      cin>>num2;
      
      switch (oprt)
      {
        case 1:penjumlahan(num1,num2);
                break;
        case 2:pengurangan(num1,num2);
                break;
        case 3:pembagian(num1,num2);
                break;
        case 4:perkalian(num1,num2);
                break;
        case 5:modulusuy(num1,num2);
        		break;
      }
      
      //PERTANYAAN UNTUK SELESAI
      
      pertanyaan:
      cout<<"\n\nApakah Anda ingin menggunakan lagi?(y/n)";
      cin>>H;
      if (H == 'y')
      {
        system("cls");
		cout<<"\nKembali ke pilih operator :D\n\n";
        goto kembalioprt;
      }
      else if (H == 'n')
      {
        cout<<"Okaay, Byee see you next time :)\n\n";
      }elses
      {
        cout<<"inputmu salah, Kembali ke pertanyaan!\n\n";
        goto pertanyaan;
      }
  return 1;
}
