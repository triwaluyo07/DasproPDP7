#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("3 ayam petelur dengan harga Rp150.000 per ekor umur 3 bulan\n");
    printf("ayam bertelur dari umur 4 bulan hingga 20 bulan\n");
    printf("1kg telur seharga Rp14.500 isi 15\n");
    printf("1kg isi 15 telur\n");
    printf("biaya pakan dan perawatan mencapai Rp200.000\n");
    puts(" \n");

    int bulan;
    int telur;
    int hari =30;
    int kilo;
    int keuntungan;
    int perawatan = 200000;

    for(bulan=3;bulan<=20;bulan++)
    {
      telur=3*3*hari*(bulan-3);
      kilo =telur/15;
      printf("Bulan ke %d julah telur nya adalah %d dan jumlah telur per kg adalah %d\n",bulan,telur,kilo);
    }

    puts(" ");
    keuntungan = (kilo*14500)-(perawatan)-(450000);
    printf("Keuntungan Ibu Budi : Rp%d\n", keuntungan);




    return 0;
}
