#include <iostream>
using namespace std;
//fungsi menentukan warna
string warna (int now)
{
    int lampu = (now - 45) % 103;
    if (lampu <=3) 
        return "Kuning" ;
    else if (lampu <=83)
        return "Merah";
    else return "Hijau" ;

}
//fungsi main
int main()
{
    int detik[]= {80,135,150,212};
    cout<<"Hasil dari soal nomor 3 adalah :" <<endl;
    for (int i : detik){
        cout<<"warna lampu:" << warna(i) <<endl ;
    };
    return 0; 
}

