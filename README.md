# Toolkit Asisten Laboratorium

Toolkit ini adalah program C untuk membantu praktikum elektronika dan listrik, menyediakan kalkulator listrik dan konversi bilangan.

---

## Fitur

| Menu | Fungsi |
|------|--------|
| 1    | Kalkulator Hukum Ohm (V = I * R) |
| 2    | Kalkulator Daya Listrik (P = V * I) |
| 3    | Kalkulator Resistor Seri |
| 4    | Kalkulator Resistor Paralel |
| 5    | Desimal → Biner / Oktal / Heksadesimal |
| 6    | Biner → Desimal |
| 7    | Oktal → Desimal |
| 8    | Heksadesimal → Desimal |
| 9    | Keluar |

---

## Cara Menggunakan

1. Compile program:
```
gcc -o toolkit toolkit.c
```

2. Jalankan program:
```
./toolkit
```

3. Pilih menu dengan angka 1–9 dan ikuti instruksi untuk memasukkan nilai.

---

## Contoh Penggunaan

### Kalkulator Hukum Ohm
- Input:
  - Pilih `V`
  - Arus `I = 2 A`
  - Hambatan `R = 5 Ω`
- Output: `Tegangan (V) = 10.00 Volt`

### Konversi Desimal ke Biner/Oktal/Heksadesimal
- Input: `10`
- Output:
```
Biner       : 1010
Oktal       : 12
Heksadesimal: A
```

---

## Catatan
- Program menggunakan `Sleep()` (Windows) untuk menunda tampilan 3 detik setelah operasi.  
- Pilihan huruf pada Hukum Ohm bersifat case-insensitive (`V/v`, `I/i`, `R/r`).  
- Pastikan input berupa angka valid.

---

## Lisensi
Gratis untuk penggunaan edukasi dan eksperimen pribadi.
