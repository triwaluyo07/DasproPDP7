#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///NIm : A11.2017.10097
int main()
{
    printf("1-50, 50-1, dan selisihnya\n");
    puts(" \n");
    ///loop1c

    int loop1;
    int loop2;
    int loop3;

    for(loop1=1,loop2=50;loop1<51,loop2>=1;loop1+=1,loop2-=1)
    {
    printf("%d ",loop1);
    printf("%d ",loop2);
    loop3=loop1-loop2;
    printf("%d \n",loop3);

    }

    return 0;
}
