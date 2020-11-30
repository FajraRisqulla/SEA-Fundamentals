#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "prototype_functions.h"

typedef struct {
    char makanan[20];
    int harga;
    int subtotal;
    int kuantitas;
} pesanan;

pesanan order[10];
bool user_is_inside = false;

//Set jumlah pesanan untuk mengakses index array of struct yang akan diisi
int jumlah_pesanan = 0;
char menu_makanan[2][20] = { "Bakso", "Sate" };
//Function Prototyping

void calculate(int* pilihan, int* jumlah) {
    if (*pilihan == 1) {
        strcpy(order[jumlah_pesanan].makanan, menu_makanan[0]);
        order[jumlah_pesanan].kuantitas = *jumlah;
        order[jumlah_pesanan].subtotal = 10000 * (*jumlah);
        jumlah_pesanan += 1;//Tambahkan jumlah pesanan dengan 1 , agar index array yang diakses selanjutnya bertambah
    }
    else if (*pilihan == 2) {
        strcpy(order[jumlah_pesanan].makanan, menu_makanan[1]);
        order[jumlah_pesanan].kuantitas = *jumlah;
        order[jumlah_pesanan].subtotal = 20000 * (*jumlah);
        jumlah_pesanan += 1;//Tambahkan jumlah pesanan dengan 1 , agar index array yang diakses selanjutnya bertambah
    }
}

//Fungsi Menu 
void greeting_message() {
    printf("Selamat Datang di Restoran Sederhana !\n");
}

void back_to_menu() {
    printf("Pilihan Menu : \n\n");

    for (int i = 0; i < 2; i++) {
        printf("%d. %s\n", i + 1, menu_makanan[i]);
    }
}

void menu() {
    if (user_is_inside == false) {
        greeting_message();
    }
    int pilihan;
    int jumlah;
menu:
    back_to_menu();
    printf("\nMasukkan pilihan : ");
    scanf("%d", &pilihan);
    user_is_inside = true; //Set user is inside = true, karena user sudah masuk kedalam program , agar pesan selamat datang tidak muncul lagi selanjutnya

    switch (pilihan) {
    case 1:
        printf("Jumlah : ");
        scanf("%d", &jumlah);
        //* pass by address to functions
        calculate(&pilihan, &jumlah);
        break;
    case 2:
        printf("Jumlah : ");
        scanf("%d", &jumlah);
        //* pass by address to functions
        calculate(&pilihan, &jumlah);
    default:
        break;
        printf("Pilihan anda tidak ada, ulangi lagi!\n\n");
        goto menu;
    }

    char pesanlagi;

    printf("Ingin memesan lagi ? input y jika ya : ");
    //! "fflush(stdin)" only works on windows, but it wasn't work on Arch Linux, so I used "while ((getchar()) != '\n');"
    //fflush(stdin);
    while ((getchar()) != '\n');
    scanf("%c", &pesanlagi);

    if (tolower(pesanlagi) == 'y') goto menu;
    else show_invoice();
}

void show_invoice() {
    printf("Pesanan Kamu : \n\n");
    int total = 0;
    printf("%-20s %-20s %-20s\n", "Pesanan", "Kuantitas", "Subtotal");
    for (int i = 0; i < jumlah_pesanan; i++) {
        printf("%-20s %-20d %-20d\n", order[i].makanan, order[i].kuantitas, order[i].subtotal);
        total += order[i].subtotal;
    }
    printf("\nTotal : Rp. %d\n", total);
    printf("Silahkan lakukan pembayaran!");
}