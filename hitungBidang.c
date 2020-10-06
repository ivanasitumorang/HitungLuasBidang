#include "stdio.h"

// pre-define functions
void printOptions();
void displayMenuContent(int);
void showChoiceNotAvailable();
void printNewLines(int);
void displayOutput(char*, double);
void calculatePersegi();

int main() {

    printf("Hitung luas bidang");
    printNewLines(1);
    printf("Pilih salah satu dari pilihan berikut ini :");
    printNewLines(1);
    printOptions();

    int choice;
    printNewLines(2);
    printf("Masukkan pilihan kamu [1, 2, 3]: ");
    scanf("%d", &choice);
    displayMenuContent(choice);

    return 0;
}

void printOptions() {
    printf("1. Persegi");
    printNewLines(1);
    printf("2. Persegi Panjang");
    printNewLines(1);
    printf("3. Segitiga");
}

void displayMenuContent(int choice) {
    switch (choice)
    {
    case 1:
        calculatePersegi();
        break;
    
    default:
    showChoiceNotAvailable();
        break;
    }
}

void showChoiceNotAvailable() {
    printf("Pilihan belum tersedia saat ini.");
}

void printNewLines(int totalLine) {
    int index;
    for (index = 0; index < totalLine; index++) {
        printf("\n");
    }
}

void displayOutput(char* choice, double total) {
    printNewLines(1);
    printf("Luas bidang %s adalah %.2f m2", choice, total);
}

void calculatePersegi() {
    double height;
    double total;
    printf("Masukkan panjang persegi: ");
    scanf("%lf", &height);
    total = height*height;
    displayOutput("Persegi", total);
}