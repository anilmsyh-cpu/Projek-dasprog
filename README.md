# LAPORAN PRAKTIKUM PEMROGRAMAN C

## Judul Praktikum

*Toolkit Asisten Laboratorium Berbasis Bahasa C*

## 1. Tujuan Praktikum

Tujuan dari praktikum ini adalah:

1. Menerapkan konsep dasar bahasa pemrograman C
2. Menggunakan fungsi, percabangan, dan perulangan
3. Mengimplementasikan perhitungan dasar kelistrikan
4. Mengimplementasikan konversi sistem bilangan
5. Melatih pembuatan program berbasis menu


## 2. Dasar Teori

### 2.1 Hukum Ohm

Hukum Ohm menyatakan hubungan antara tegangan (V), arus (I), dan hambatan (R):


V = I × R


### 2.2 Daya Listrik

Daya listrik merupakan energi yang digunakan tiap satuan waktu:


P = V × I


### 2.3 Resistor Seri dan Paralel

* *Seri*:


R_total = R1 + R2 + ... + Rn


* *Paralel*:


1/R_total = 1/R1 + 1/R2 + ... + 1/Rn


### 2.4 Sistem Bilangan

Program menggunakan sistem bilangan:

* Biner (basis 2)
* Oktal (basis 8)
* Desimal (basis 10)
* Heksadesimal (basis 16)

## 3. Alat dan Bahan

* Laptop / PC
* Compiler GCC
* Editor kode (VS Code / Code::Blocks)
* Sistem Operasi Windows / Linux


## 4. Algoritma Singkat

1. Program menampilkan menu utama
2. User memilih salah satu menu
3. Program memanggil fungsi sesuai pilihan
4. Program melakukan perhitungan atau konversi
5. Hasil ditampilkan ke layar
6. Program kembali ke menu hingga user keluar


## 5. Implementasi Program

Program diimplementasikan menggunakan bahasa *C* dengan konsep:

* Fungsi
* Array dan string
* switch-case
* Perulangan for dan do-while

### Menu Program

text
1. Kalkulator Hukum Ohm
2. Kalkulator Daya Listrik
3. Kalkulator Resistor Seri
4. Kalkulator Resistor Paralel
5. Desimal -> Biner/Oktal/Heksadesimal
6. Biner -> Desimal
7. Oktal -> Desimal
8. Heksadesimal -> Desimal
9. Keluar

## 6. Cara Menjalankan Program

### Compile

bash
gcc main.c -o toolkit


### Run

bash
./toolkit


## 7. Hasil Percobaan

Program berhasil:

* Menghitung besaran listrik dengan benar
* Melakukan konversi sistem bilangan
* Menampilkan menu interaktif

Contoh:

* Input Heksadesimal: 1A
* Output Desimal: 26


## 8. Analisis

Program bekerja sesuai teori yang dipelajari pada praktikum. Setiap fungsi berdiri sendiri sehingga mudah dipahami dan dikembangkan. Namun, program belum memiliki validasi input yang lengkap.

## 9. Kesimpulan

Berdasarkan praktikum yang dilakukan, dapat disimpulkan bahwa:

1. Bahasa C efektif digunakan untuk perhitungan teknik dasar
2. Konsep fungsi dan menu mempermudah penggunaan program
3. Program dapat dikembangkan lebih lanjut dengan validasi dan GUI
