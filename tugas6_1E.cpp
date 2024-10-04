#include <stdio.h>
#include <string>
using namespace std;

int main(){
    string nama;
    int nabsen;
    int ntugas;
    int nuts;
    int nuas;
    int nakhir;

    scanf("%s",&nama);
    scanf("%i",&nabsen);
    scanf("%i",&ntugas);
    scanf("%i",&nuts);
    scanf("%i",&nuas);

    nakhir = (nabsen* 0.10) + (ntugas * 0.2) + (nuts * 0.3) + (nuas * 0.4);
    printf("%i\n",nakhir);

    string huruf;

    if (nakhir <= 100 && 85 <= nakhir){
        huruf = "a";
    }
    else if (nakhir < 85 && 80 <= nakhir){
        huruf = "b";
    }
    else if (nakhir < 80 && 75 <= nakhir){
        huruf = ("c");
    }
    else if (nakhir < 75 && 70 <= nakhir){
        huruf = ("d");
    }
    else if (nakhir < 70){
        huruf = "e";
    }
    printf("%s\n",nama);
    printf("%i\n",nabsen);
    printf("%i\n",nuts);
    printf("%i\n",nuas);
    printf("%i\n",nakhir);
    printf("%c\n",huruf);
}

//no 2

#include <stdio.h>

using namespace std;

int main(){
    int tinggi;

    printf("Masukkan tinggi segitiga: ");
    scanf("%d", &tinggi);

    for (int i = 1; i <= tinggi; i++) {
        for (int j = 1; j <= tinggi - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


//no 3

#include <iostream>
using namespace std;

double k(int jamKerja) {
    const double gajiPerJam = 7;
    return gajiPerJam * jamKerja;
}

double j(int jamKerja) {
    const double gajiPerJam = 8;
    return gajiPerJam * jamKerja;
}

int main() {
    int x;

    cout << "Masukkan 1 atau 2: ";
    cin >> x;

    double j1 = j(jamKerja);
    double j2 = k(jamKerja);

    double total = j1 + j2;

    cout << "Gaji Pokok: " << total << endl;

    return 0;
}

//no 4

#include <stdio.h>
using namespace std;


int main() {
    int batas;
    printf("Masukkan batas tertentu: ");
    scanf("%d", &batas);

    int totalGanjil = 0, totalGenap = 0;

    printf("Bilangan Genap: ");
    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            totalGenap += i;
            printFactors(i);
        }
    }
    printf("\nJumlah Bilangan Genap: %d\n", totalGenap);

    printf("\nBilangan Ganjil: ");
    for (int i = 1; i <= batas; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
            totalGanjil += i;
            printFactors(i);
        }
    }
    printf("\nJumlah Bilangan Ganjil: %d\n", totalGanjil);
    return 0;
}


//no 5


#include <stdio.h>
using namespace std;

int main(){
    int tb;
    int bb;

    scanf("%i",&tb);
    scanf("%i",&bb);

    int itm = (bb/(tb * tb));

    string kriteria;

    if (18 < itm){
        kriteria = "kurang";
    }
    else if (itm < 24 && 18 <= itm){
        kriteria = "ideal";
    }
    else if (itm < 29 && 25 <= itm){
        kriteria = ("lebih");
    }
    else if (itm < 39 && 30 <= itm){
        kriteria = ("gemuk");
    }
    else if (itm > 40){
        kriteria = "sangatgemuk";
    }
    printf("%s\n",kriteria);
}
