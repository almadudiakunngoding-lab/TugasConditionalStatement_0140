#include <iostream>
using namespace std;

float Rata_rata(float a, float b){
     return (a/(b*b));
}

string status_BMI(float r){
    if (r <= 18.5)
        return "Berat Badan Kurang ";
    else if (r <= 25)
        return "Berat Badan Normal";
    else if (r <= 30)
        return "Berat badan belebihan";
    else if (r >=18.5)
        return "Obesitas";
    else if (r >= 30)
        return "Obesitas";
}

int main (){

    float masBB,masTB,rerata;
    string status;

    cout <<"--- Selamat Datang Mahasiswa Kelas C 2026 ---"<<endl;
    cout <<"masukan Berat Badan =";
    cin >> masBB;
    cout <<"masukan tinggi badan =";
    cin >> masTB;
}