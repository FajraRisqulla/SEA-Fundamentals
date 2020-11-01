#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tabel[3][3];

    system("clear");
    printf("Baris 1 Kolom 1\t: ");
    scanf("%d", &tabel[0][0]);
    printf("Baris 1 Kolom 2\t: ");
    scanf("%d", &tabel[0][1]);
    printf("Baris 1 Kolom 3\t: ");
    scanf("%d", &tabel[0][2]);
    printf("Baris 2 Kolom 1\t: ");
    scanf("%d", &tabel[1][0]);
    printf("Baris 2 Kolom 2\t: ");
    scanf("%d", &tabel[1][1]);
    printf("Baris 2 Kolom 3\t: ");
    scanf("%d", &tabel[1][2]);
    printf("Baris 3 Kolom 1\t: ");
    scanf("%d", &tabel[2][0]);
    printf("Baris 3 Kolom 2\t: ");
    scanf("%d", &tabel[2][1]);
    printf("Baris 3 Kolom 3\t: ");
    scanf("%d", &tabel[2][2]);
    putchar('\n');

    printf("Matriks\t: \n");
    printf("[%d %d %d]\n", tabel[0][0], tabel[0][1], tabel[0][2]);
    printf("[%d %d %d]\n", tabel[1][0], tabel[1][1], tabel[1][2]);
    printf("[%d %d %d]\n\n", tabel[2][0], tabel[2][1], tabel[2][2]);
    printf("Jumlah Diagonal adalah %d", tabel[0][0]+tabel[1][1]+tabel[2][2]);

    return 0;
}
