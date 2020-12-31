#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///NIm : A11.2017.10097

int main()
{
    int input;
    int loop;
    int angka;

    printf("Menginputkan data berupa integer dan menampilkan data tersebut.\n");
    puts(" \n");

    printf("masukkan jumlah angka : ");
    scanf("%d",&input);

    for(angka=1;angka<=input;angka+=1)
    {
     printf("masukkan angka ke-%d :",angka);
     scanf("%d",&loop);
     printf("Angka ke%d adalah %d \n",angka,loop);
    }
    return 0;
}
