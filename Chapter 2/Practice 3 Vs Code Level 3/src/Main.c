
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char nama[25];
   float nilaiPemrograman, nilaiKalkulus, nilaiFisika, nilaiSistemOperasi, nilaiBasisData;
   float sksPemrograman, sksKalkulus, sksFisika, sksSistemOperasi, sksBasisData;
   float IP, jml_sks;

   system("clear");
   printf("Masukkan Nama Mahasiswa\t: ");
   fgets(nama, 24, stdin);
   strtok(nama, "\n");
   putchar('\n');

   printf("Nilai Mata Kuliah Pemrograman (dalam bobot)\t: ");
   scanf("%f", &nilaiPemrograman);
   printf("Jumlah SKS\t: ");
   scanf("%f", &sksPemrograman);
   printf("Nilai Mata Kuliah Kalkulus (dalam bobot)\t: ");
   scanf("%f", &nilaiKalkulus);
   printf("Jumlah SKS\t: ");
   scanf("%f", &sksKalkulus);
   printf("Nilai Mata Kuliah Fisika (dalam bobot)\t: ");
   scanf("%f", &nilaiFisika);
   printf("Jumlah SKS\t: ");
   scanf("%f", &sksFisika);
   printf("Nilai Mata Kuliah Sistem Operasi (dalam bobot)\t: ");
   scanf("%f", &nilaiSistemOperasi);
   printf("Jumlah SKS\t: ");
   scanf("%f", &sksSistemOperasi);
   printf("Nilai Mata Kuliah Basis Data (dalam bobot)\t: ");
   scanf("%f", &nilaiBasisData);
   printf("Jumlah SKS\t: ");
   scanf("%f", &sksBasisData);
   putchar('\n');

   jml_sks=sksPemrograman+sksKalkulus+sksFisika+sksSistemOperasi+sksBasisData; 
   IP = ((nilaiPemrograman*sksPemrograman)+(nilaiKalkulus*sksKalkulus)+(nilaiFisika*sksFisika)+(nilaiSistemOperasi*sksSistemOperasi)+(nilaiBasisData*sksBasisData))/jml_sks;

   printf("Nama Mahasiswa\t: %s\n", nama);
   printf("IP Semester ini\t: %f", IP);

   return 0;
}
