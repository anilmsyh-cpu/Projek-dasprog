#include <stdio.h>

#include <string.h>

#include <windows.h>


void hukumOhm() {
char pilih;
double V, I, R;
printf("--- Kalkulator Hukum Ohm (V = I * R) ---\n");
printf("Hitung [V] Tegangan, [I] Arus, [R] Hambatan? (V/I/R): ");
scanf(" %c", &pilih);

switch(pilih) {  
    case 'V': case 'v':  
        printf("Masukkan Arus (I dalam Ampere): ");  
        scanf("%lf", &I);  
        printf("Masukkan Hambatan (R dalam Ohm): ");  
        scanf("%lf", &R);  
        V = I * R;  
        printf("Tegangan (V) = %.2lf Volt\n", V);  
        break;  
    case 'I': case 'i':  
        printf("Masukkan Tegangan (V dalam Volt): ");  
        scanf("%lf", &V);  
        printf("Masukkan Hambatan (R dalam Ohm): ");  
        scanf("%lf", &R);  
        I = V / R;  
        printf("Arus (I) = %.2lf Ampere\n", I);  
        break;  
    case 'R': case 'r':  
        printf("Masukkan Tegangan (V dalam Volt): ");  
        scanf("%lf", &V);  
        printf("Masukkan Arus (I dalam Ampere): ");  
        scanf("%lf", &I);  
        R = V / I;  
        printf("Hambatan (R) = %.2lf Ohm\n", R);  
        break;  
    default:  
        printf("Pilihan tidak valid!\n");  
}

}

void dayaListrik() {
double V, I, P;
printf("--- Kalkulator Daya Listrik (P = V * I) ---\n");
printf("Masukkan Tegangan (Volt): ");
scanf("%lf", &V);
printf("Masukkan Arus (Ampere): ");
scanf("%lf", &I);
P = V * I;
printf("Daya (P) = %.2lf Watt\n", P);
}

void resistorSeri() {
int n, i;
double total = 0, R;
printf("--- Kalkulator Resistor Seri ---\n");
printf("Masukkan jumlah resistor: ");
scanf("%d", &n);
for (i = 1; i <= n; i++) {
printf("Masukkan nilai Resistor %d (Ohm): ", i);
scanf("%lf", &R);
total += R;
}
printf("Total Hambatan Seri = %.2lf Ohm\n", total);
}

void resistorParalel() {
int n, i;
double total = 0, R;
printf("--- Kalkulator Resistor Paralel ---\n");
printf("Masukkan jumlah resistor: ");
scanf("%d", &n);
for (i = 1; i <= n; i++) {
printf("Masukkan nilai Resistor %d (Ohm): ", i);
scanf("%lf", &R);
total += 1.0 / R;
}
printf("Total Hambatan Paralel = %.2lf Ohm\n", 1.0 / total);
}

void desimalKeBiner(int n) {
int bin[65], i = 0;
if (n == 0) { printf("0"); return; }
while (n > 0) {
bin[i++] = n % 2;
n /= 2;
}
for (int j = i - 1; j >= 0; j--) {
printf("%d", bin[j]);
}
}

void desimalKeBasis() {
int n;
printf("--- Konversi dari Desimal ---\n");
printf("Masukkan bilangan desimal: ");
scanf("%d", &n);
printf("Biner       : "); desimalKeBiner(n); printf("\n");
printf("Oktal       : %o\n", n);
printf("Heksadesimal: %X\n", n);
}

void binerKeDesimal() {
char bin[65];
long long decimal = 0;
printf("--- Konversi Biner ke Desimal ---\n");
printf("Masukkan bilangan biner: ");
scanf("%s", bin);
for (int i = 0; i < strlen(bin); i++) {
decimal = decimal * 2 + (bin[i] - '0');
}
printf("Hasil Desimal = %lld\n", decimal);
}

void oktalKeDesimal() {
char oct[65];
long long decimal = 0;
printf("--- Konversi Oktal ke Desimal ---\n");
printf("Masukkan bilangan oktal: ");
scanf("%s", oct);
for (int i = 0; i < strlen(oct); i++) {
decimal = decimal * 8 + (oct[i] - '0');
}
printf("Hasil Desimal = %lld\n", decimal);
}

void heksaKeDesimal() {
char hex[65];
long long decimal = 0;
printf("--- Konversi Heksadesimal ke Desimal ---\n");
printf("Masukkan bilangan heksadesimal: ");
scanf("%s", hex);
for (int i = 0; i < strlen(hex); i++) {
char c = hex[i];
int val;
if (c >= '0' && c <= '9') val = c - '0';
else if (c >= 'A' && c <= 'F') val = 10 + (c - 'A');
else if (c >= 'a' && c <= 'f') val = 10 + (c - 'a');
else val = 0;
decimal = decimal * 16 + val;
}
printf("Hasil Desimal = %lld\n", decimal);
}

int main() {
int pilih;
do {
printf("\n==============================\n");
printf(" TOOLKIT ASISTEN LABORATORIUM\n");
printf("==============================\n");
printf("1. Kalkulator Hukum Ohm\n");
printf("2. Kalkulator Daya Listrik\n");
printf("3. Kalkulator Resistor Seri\n");
printf("4. Kalkulator Resistor Paralel\n");
printf("5. Desimal -> Biner/Oktal/Heksadesimal\n");
printf("6. Biner -> Desimal\n");
printf("7. Oktal -> Desimal\n");
printf("8. Heksadesimal -> Desimal\n");
printf("9. Keluar\n");
printf("Pilih menu: ");
scanf("%d", &pilih);

switch(pilih) {  
        case 1: hukumOhm(); Sleep(3000);break;  
        case 2: dayaListrik(); Sleep(3000);break;  
        case 3: resistorSeri();Sleep(3000); break;  
        case 4: resistorParalel(); Sleep(3000);break;  
        case 5: desimalKeBasis();Sleep(3000); break;  
        case 6: binerKeDesimal(); Sleep(3000);break;  
        case 7: oktalKeDesimal(); Sleep(3000);break;  
        case 8: heksaKeDesimal(); Sleep(3000);break;  
        case 9: printf("Terima kasih!\n"); Sleep(3000);break;  
        default: printf("Pilihan tidak valid!\n");  
    }  
} while (pilih != 9);  

return 0;

}