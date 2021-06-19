#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <string>
using namespace std;
int main()
{
    int player;
    string comp, cPlayer;
    srand(time(NULL));
    awal:       
            cout << "\t-------------- Permainan Batu Gunting Kertas --------------\n\n";
            cout << "--- Pilihan ---\n";
            cout << " [1]. Batu\n";
            cout << " [2]. Kertas\n";
            cout << " [3]. Gunting\n";
            cout << " [4]. Keluar\n\n";
            cout << " Masukan Pilihan Anda : "; 
            cin >> player;

            //komputer memilih angka random 1-3;
            int pilihanComputer = rand()%3 + 1;
            if (pilihanComputer == 1)
            {
                comp = "Batu";
            } else if (pilihanComputer == 2)
            {
                comp = "Kertas";
            } else {
                comp = "Gunting";
            }

            //konversi pilihan player ke string
            if (player == 1)
            {
                cPlayer = "Batu";
            } else if (player == 2)
            {
                cPlayer = "Kertas";
            } else if (player == 3){
                cPlayer = "Gunting";
            } else if (player == 4) {    
                cout << "\n\n TERIMA KASIH TELAH BERMAIN, KAPAN-KAPAN MAIN LAGI YA\n";
                getch();
                return 0;
            } else {
                cout <<"\n Pilihan Yang Anda Pilih Tidak Tersedia\n";
                getch();
                goto awal;
            }

            //menampilkan hasil ke konsol
            cout << "Pilihan Kamu\t\t: " << cPlayer << "\n";
            cout << "Pilihan Komputer\t: " << comp << "\n\n";

            if (player == pilihanComputer)
            {       
                cout << "\t- DRAW -\n";
            } else {
                //menggunakan operator ternary untuk menampilkan kalah atau menang
                if (player == 1)
                {   
                    (pilihanComputer == 3) ? cout << "\t - KAMU MENANG T_T T_T T_T -\n" : cout<<"\t - KAMU KALAH :P :P :P :P -\n";
                } else if (player == 2) {
                    (pilihanComputer == 1) ? cout << "\t - KAMU MENANG T_T T_T T_T -\n" : cout<<"\t - KAMU KALAH :P :P :P :P -\n";                                
                } else {
                    (pilihanComputer == 2) ? cout << "\t - KAMU MENANG T_T T_T T_T -\n" : cout<<"\t - KAMU KALAH :P :P :P :P -\n";                                  
                }
            }
            getch();
            // system("cls");
            goto awal;
}
