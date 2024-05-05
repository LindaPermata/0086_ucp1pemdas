// 1.a)int main () {}
//   b)char()
//   c)string nama ()
//   d)varchar


// 2.a)Contoh Prosedur
//void Linda(){

//}

//   b)Contoh Fungsi
//int main() {

//int bilangan;
//}

// 3. Contoh Looping
// looping for
//int main()
//{
//   int i;
//  int arr[5];

// for (i = 0; i < 5; i++)
// {
//    cout << i << " : " << "Linda Permata Sari" << endl;
// }

//4.Contoh conditional Statement
// #include <iostream>
// using namespace std;

// int main (){
   // int nBilangan;
   // string Status;
  // srand (time(0));

   
   // nBilangan = rand() % 10;
    //cout << "Nilainya adalah = " << nBilangan << endl;

    //if (nBilangan % 2 == 0){
    //   Status = "genap";
    //}
    //else {
     //   Status = "ganjil";
   // }
    //cout << "Statusnya adalah = " << Status << endl;

    //return 0;

    //}

//5.Contoh Struct
//#include <iostream>
//using namespace std;

//struct Mahasiswa {
//   string nim;
//  string nama;
//  string alamat;
// int umur;
// };

#include <iostream>
using namespace std;

void input() {
    
}

int main() {
    int nilaiSensor1;
    int nilaiSensor2;
    int nilaiSensor3;
    int nilaiRerata;
    string namaKota;
    string status;

    if(nilaiRerata == 75 ) {
        status = "Tidak Sehat";
    }
    else if (nilaiSensor1 == 45) {
        status = "Tidak Sehat";
    }
    else {
        status = "Sehat";
    }

    cout <<"nama Kota = " << namaKota << endl;
    cout << "Statusnya adalah = " << status << endl;

    return 0;


    
}
