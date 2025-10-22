# Tugas Looping 04

**Nama:** Falik Fabio Aulia  
**Kelas:** Malam Karyawan TI C

---

## 📋 Deskripsi Project

Program C++ yang menghitung jumlah total bilangan genap dan ganjil dari sejumlah data yang diinputkan oleh pengguna. Project ini merupakan tugas pembelajaran tentang penggunaan loop `do...while` dan conditional statement dalam pemrograman C++.

---

## ✨ Fitur Utama

- Input dinamis untuk sejumlah data sesuai keinginan pengguna
- Penggunaan loop `do...while` untuk memastikan minimal sekali eksekusi
- Validasi bilangan genap dan ganjil menggunakan operator modulo (`%`)
- Akumulasi jumlah total bilangan genap dan ganjil secara terpisah
- Output hasil yang terstruktur dan mudah dibaca
- Implementasi konsep dasar loop dan conditional statement

---

## 🛠️ Teknologi yang Digunakan

- **Bahasa Pemrograman:** C++ (C Plus Plus)
- **Standard Library:** iostream (untuk input/output)
- **Compiler:** GCC, Clang, atau MinGW
- **Platform:** Linux, macOS, Windows
- **IDE Rekomendasi:** Visual Studio Code, Code::Blocks, Dev-C++, atau NetBeans

---

## 📦 Prasyarat Instalasi

Sebelum menjalankan program ini, pastikan Anda telah menginstall:

1. **Compiler C++**
   - **Windows:** MinGW, Dev-C++, atau Visual Studio Build Tools
   - **Linux:** Install via terminal dengan `sudo apt-get install build-essential`
   - **macOS:** Xcode Command Line Tools atau Homebrew

2. **Git** (untuk clone repository)
   - Download dari [git-scm.com](https://git-scm.com)

3. **Text Editor atau IDE** (opsional)
   - Visual Studio Code, Code::Blocks, Dev-C++, atau Vim

---

## 📁 Susunan Project

```
tugas-looping-04/
├── README.md                     # File dokumentasi
├── FalikTugasLooping04.cpp      # File source code utama
└── .gitignore                   # File gitignore
```

---

## 🚀 Cara Instalasi & Menjalankan

### 1. Clone Repository

```bash
git clone https://github.com/username/tugas-looping-04.git
cd tugas-looping-04
```

### 2. Kompilasi Program

Buka terminal/command prompt di folder project, kemudian jalankan:

```bash
g++ -o FalikTugasLooping04 FalikTugasLooping04.cpp
```

Jika menggunakan compiler lain:
```bash
clang++ -o FalikTugasLooping04 FalikTugasLooping04.cpp
```

### 3. Jalankan Program

**Di Linux/macOS:**
```bash
./FalikTugasLooping04
```

**Di Windows:**
```bash
FalikTugasLooping04.exe
```

---

## 💡 Contoh Penggunaan

### Contoh Eksekusi Program

```
Masukkan jumlah data: 5
Input data ke-1: 10
Input data ke-2: 15
Input data ke-3: 20
Input data ke-4: 7
Input data ke-5: 12

=== HASIL ===
Jumlah total bilangan ganjil : 22
Jumlah total bilangan genap : 42
```

### Penjelasan Contoh

- Input 5 data: 10, 15, 20, 7, 12
- Bilangan genap: 10, 20, 12 → Total: 42
- Bilangan ganjil: 15, 7 → Total: 22

### Contoh Lain

```
Masukkan jumlah data: 3
Input data ke-1: 5
Input data ke-2: 10
Input data ke-3: 15

=== HASIL ===
Jumlah total bilangan ganjil : 20
Jumlah total bilangan genap : 10
```

---

## 📝 Penjelasan Kode

Berikut adalah penjelasan bagian-bagian penting dari program:

**Deklarasi Variabel:**
```cpp
int n, data, i = 0;
int jumGenap = 0, jumGanjil = 0;
```
- `n`: jumlah data yang akan diinput
- `data`: variabel untuk menyimpan nilai data sementara
- `i`: counter untuk loop
- `jumGenap`: akumulator untuk jumlah bilangan genap
- `jumGanjil`: akumulator untuk jumlah bilangan ganjil

**Loop do...while:**
```cpp
do {
    // kode yang akan dieksekusi
    i++;
} while (i < n);
```
Memastikan kode dijalankan minimal satu kali sebelum memeriksa kondisi.

**Pengecekan Genap/Ganjil:**
```cpp
if (data % 2 == 0) {
    jumGenap = jumGenap + data;
} else {
    jumGanjil = jumGanjil + data;
}
```
Menggunakan operator modulo (`%`) untuk menentukan sisa bagi, jika sisa 0 maka genap, selainnya ganjil.

---

## 🤝 Kontribusi

Kami menyambut kontribusi dari siapa saja! Berikut adalah cara untuk berkontribusi:

### Langkah-Langkah Kontribusi

1. **Fork Repository**
   - Klik tombol "Fork" di halaman repository GitHub

2. **Clone Repository Anda**
   ```bash
   git clone https://github.com/username-anda/tugas-looping-04.git
   cd tugas-looping-04
   ```

3. **Buat Branch Baru**
   ```bash
   git checkout -b fitur/nama-fitur-anda
   ```

4. **Lakukan Perubahan**
   - Edit file yang diperlukan
   - Tambahkan komentar yang jelas pada kode
   - Pastikan program sudah berfungsi dengan baik
   - Test dengan berbagai input

5. **Commit Perubahan**
   ```bash
   git add .
   git commit -m "Deskripsi singkat perubahan yang dilakukan"
   ```

6. **Push ke Repository**
   ```bash
   git push origin fitur/nama-fitur-anda
   ```

7. **Buat Pull Request**
   - Buka repository asli di GitHub
   - Klik tombol "New Pull Request"
   - Jelaskan perubahan dan alasan kontribusi Anda
   - Tunggu review dari maintainer

### Pedoman Kontribusi

- Mengikuti coding style yang sudah ada
- Menambahkan komentar untuk kode yang kompleks
- Update dokumentasi jika ada perubahan fitur
- Melakukan testing sebelum submit
- Menggunakan pesan commit yang deskriptif dan bermakna
- Respek terhadap kode dan contributors lain

### Ide Kontribusi

- Validasi input untuk memastikan input berupa angka
- Menambahkan fitur hitung rata-rata bilangan genap dan ganjil
- Membuat versi dengan array untuk menyimpan semua data
- Menambahkan menu untuk operasi berbeda
- Dokumentasi yang lebih lengkap

---

## 📊 Konsep yang Dipelajari

Program ini mengajarkan beberapa konsep penting dalam pemrograman:

- **Loop do...while:** Perulangan yang minimal dijalankan satu kali
- **Conditional Statement:** Penggunaan if-else untuk pengambilan keputusan
- **Operator Modulo:** Menggunakan `%` untuk mencari sisa pembagian
- **Akumulasi Data:** Menjumlahkan nilai-nilai dalam loop
- **Input/Output:** Berinteraksi dengan pengguna melalui console

---

## 💬 Diskusi & Dukungan

Jika Anda memiliki pertanyaan, saran, atau menemukan bug, silakan:

- Buka **Issue** di repository ini
- Atau hubungi melalui GitHub Discussions

---

## 📧 Kontak

- **Nama:** Falik Fabio Aulia
- **Kelas:** Malam Karyawan TI C

---
