#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    //declaration of varibles
    char nama[30];
    float diskon = 0.2;
    int bln_lhr;
    int ttl_blnj;

    system("clear");
    printf("Nama Pelanggan\t\t\t\t: ");
    fgets(nama, 29, stdin);
    strtok(nama, "\n");
    printf("Bulan Lahir Pelanggan\t\t\t: ");
    scanf("%d", &bln_lhr);
    printf("Total Belanja\t\t\t\t: Rp.");
    scanf("%d", &ttl_blnj);
    putchar('\n');

    diskon = (diskon + (float)bln_lhr / 100) * ttl_blnj;

    printf("Pelanggan %s mendapat diskon\t: Rp.%d.00\n", nama, (int)diskon);
    printf("Total belanja setelah diskon\t\t: Rp.%d.00", ttl_blnj - (int)diskon);

    return 0;
}
