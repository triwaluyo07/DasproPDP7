#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

///Nama : Tri Waluyo
///Nim  : A11.2017.10097
///Kelas: 4103

int main()
{
    int ascii;

    printf("Mencetak semua character ASCII dari index 0-127\n");
    puts(" \n");
    printf("=====For=====\n");
    for(ascii=0;ascii<=127;ascii++)
    {
        printf("ASCII %3d = %c\n",ascii,ascii);
    }

    puts(" \n");
    printf("=====While=====\n");
    ascii=0;
    while(ascii<=127)
    {
    printf("ASCII %3d = %c\n",ascii,ascii);
    ascii+=1;
    }

    puts(" \n");
    printf("=====Do-While=====\n");
    ascii=0;
    do
    {
        printf("ASCII %3d = %c\n",ascii,ascii);
        ascii+=1;
    }
    while (ascii<=127);
    return 0;
}
