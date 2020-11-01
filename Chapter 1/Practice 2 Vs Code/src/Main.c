#include <stdio.h>
#include <stdlib.h>//system ("cls")
//preprocessing directive area

int main()
{
    //deklarasi
    int thn_lhr;
    char nama[25];

    // clear output pada console
    system("clear");

    //penginputan data
    printf("\t\t\t    ~~~~~The Future Of Jarvis~~~~~~\n\n");
    printf("Masukkan Nama\t\t: ");
    scanf("%s", nama);

    printf("Masukkan Tahun Lahir\t: ");
    scanf("%d", &thn_lhr);
    putchar('\n');

    //clear output pada console
    system("clear");
    
    //pengolahan data dan menampilkan output yang diinginkan
    printf("Halo %s, kamu berumur %d tahun!", nama, 2020-thn_lhr);



    return 0;
}
