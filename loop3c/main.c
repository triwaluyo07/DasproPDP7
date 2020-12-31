#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///NIm : A11.2017.10097

int main()
{
    int angka;
    int loop;


    printf("Menginputkan data berupa integer sebanyak 10 kali");
    puts(" \n");

    angka=1;

    while(angka<11)
    {
     printf("masukkan angka ke-%d :",angka);
     scanf("%d",&loop);
     angka++;
    }
    return 0;
}
