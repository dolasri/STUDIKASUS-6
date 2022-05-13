#include<iostream>
using namespace std;

class studikasus
{
private:
    char nama[30],matkul[30], grade;
    int tugas, uts, uas, ntugas, nuts, nuas, na;
public: 
    void input();
    void proses();
    void output();
};

void studikasus::input(){
  cout<<"PROGRAM MENGHITUNG NILAI AKHIR "<<endl<<endl;
  cout<<"Nama Mata Kuliah : "; cin>>matkul;
  cout<<"Masukkan Nama Siswa : "; cin>>nama;
  cout<<"Masukkan Nilai Tugas : "; cin>>tugas;
  cout<<"Masukkan Nilai uts : "; cin>>uts;
  cout<<"Masukkan Nilai uas : "; cin>>uas;
}

void studikasus::proses()
{
    ntugas = tugas*20/100;
    nuts = uts*35/100;
    nuas = uas*45/100;
    na =  ntugas+nuts+nuas;
    if(na>=80)
    { grade = 'A';}
    else if (na>=79)
    {
    grade = 'B';
    }
    else if (na>=60)
    {
    grade = 'C';
    }
    else if (na>=50)
    {
    grade = 'D';
    }
    else
    {
    grade = 'E';
    }
      
}

void studikasus::output()
{
    cout <<"\n========================================" << endl;
    cout<<"|      Hasil Nilai Akhir Mahasiswa"            <<endl;
    cout <<"========================================" << endl;
    cout<<"Nama Mata Kuliah   : "<<matkul<<endl;
    cout<<"Nama Mahasiswa     : "<<nama<<endl;
    cout<<"Nilai tugas        : "<<tugas<<endl;
    cout<<"Nilai UTS          : "<<uts<<endl;
    cout<<"Nilai UAS          : "<<uas<<endl;
    cout<<"Nilai Akhir        : "<<na<<endl;
    cout<<"Grade nilai yang didapat adalah "<<grade<<endl;
}

int main()
{
    studikasus x; 
    x.input(); 
    x.proses();
    x.output(); 
}
