#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Nim  : A11.2017.10097
///Kelas: 4103

int main()
{
    printf("Mencetak bilangan yang memiliki anggota bilangan angka 1, dengan interval 0-100\n");
    puts(" \n");

    int angka;


    for(angka=1;angka<=91;angka+=1)
    {
        if((angka>1)&&(angka<11)||(angka==20)||(angka>21)&&(angka<31)||(angka>31)&&(angka<41)||(angka>41)&&(angka<51)||(angka>51)&&(angka<61)||(angka>61)&&(angka<71||(angka>71)&&(angka<81))||(angka>81)&&(angka<91))
        {
            continue;
        }
        printf("%d ",angka);

    }


    return 0;
}
