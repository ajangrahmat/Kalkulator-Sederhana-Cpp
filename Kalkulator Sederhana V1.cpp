/*
KALKULATOR SEDERHANA
Halo Semuanya...

Koding dibawah ini adalah koding kalkulator sederhana, belum ada tampilan, dan kodingnya memang masih sangat sederhan sekali :D

Saya buat sebagai latihan saya belajar Pemrograman C++
Semoga bermanfaat, silakan dikembangkan...

Ajang Rahmat
https://ajangrahmat.com
*/

#include <iostream>
#include <string>
using namespace std;
float nilai1, nilai2, hasil, count;
string par;

int main()
{
    while (1)
    {
        //input nilai1
        if (count == 0)
        {
            cout << "Masukan nilai 1: ";
            cin >> nilai1;
            count = 1;
        }

        //proses
        if (count == 1)
        {
            cout << "Masukan operasi: ";
            cin >> par;
            if (par == "+")
            {
                cout << "Masukan nilai 1: ";
                cin >> nilai2; //input nilai2
                hasil = nilai1 + nilai2;
                count = 2;
            }
            if (par == "-")
            {
                cout << "Masukan nilai 1: ";
                cin >> nilai2; //input nilai2
                hasil = nilai1 - nilai2;
                count = 2;
            }
            if (par == "/")
            {
                cout << "Masukan nilai 1: ";
                cin >> nilai2; //input nilai2
                hasil = nilai1 / nilai2;
                count = 2;
            }
            if (par == "*")
            {
                cout << "Masukan nilai 1: ";
                cin >> nilai2; //input nilai2
                hasil = nilai1 * nilai2;
                count = 2;
            }
        }

        if (count == 2)
        {
            cout << "HASILNYA ADALAH JRENG JRENG: " << hasil << "\n\n";
            count = 0;
        }
    }
}