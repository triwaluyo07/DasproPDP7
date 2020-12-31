#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Nim  : A11.2017.10097
///Kelas: 4103
int main()
{
    int angka;
    int jumlah;
    float rata;

    printf("Menampilkan jumlah dan rata-rata bilangan kelipatan 3\n");
    puts(" \n");
    angka=0;

    while(angka<=60)
    {
    printf("%d ", angka);
    angka+=3;
    }
    puts(" ");
    jumlah=(60*10)+30;
    printf("jumlah angka : %d\n",jumlah);

    rata=jumlah/20;
    printf("Rata ratanya : %.2f",rata);
    return 0;

}
