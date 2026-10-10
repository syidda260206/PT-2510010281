# P04 Percabangan: if, if-else, switch, dan Operator Logika[cite: 1]

Folder kode Pertemuan 4 Pemrograman Terstruktur[cite: 1]. Setiap program di sini punya flowchart pasangannya (Gambar 2 sampai 7); baca gambarnya dulu, baru kodenya[cite: 1].

## Deskripsi Singkat
Modul ini bertujuan untuk memahami serta mengimplementasikan logika struktur kontrol keputusan (percabangan) dalam bahasa pemrograman C++[cite: 1]. Mahasiswa diharapkan mampu memahami penggunaan pernyataan `if` tunggal, `if-else`, percabangan bertingkat (nested/else-if), ekspresi kondisi menggunakan operator logika (`&&`, `||`, `!`), penggunaan kontrol keputusan `switch-case`, serta penerapannya dalam mengolah nilai akhir mahasiswa[cite: 1].

---

## Isi[cite: 1]

| Berkas | Kegunaan | Penjelasan / Keterangan |
| :--- | :--- | :--- |
| `if_dasar.cpp`[cite: 1] | `if` satu cabang: peringatan bila nilai di bawah 60[cite: 1] | Mempelajari dasar struktur `if` tunggal yang memproses pernyataan hanya ketika kondisi bernilai benar (*true*)[cite: 1]. |
| `if_else.cpp`[cite: 1] | `if-else`: lulus atau belum lulus[cite: 1] | Mempelajari percabangan dua kondisi untuk menentukan jalur alur program saat kondisi benar (*true*) atau salah (*false*)[cite: 1]. |
| `bertingkat.cpp`[cite: 1] | `if-else` bertingkat tiga syarat; coba tukar urutannya[cite: 1] | Menunjukkan penanganan beberapa kondisi beruntun (`else if`) dan pentingnya urutan pemeriksaan kondisi[cite: 1]. |
| `logika.cpp`[cite: 1] | `&&`, `||`, `!` dengan `bool` bernama; syarat ikut UAS[cite: 1] | Menggabungkan beberapa syarat logika untuk mengevaluasi kelayakan mahasiswa mengikuti ujian akhir[cite: 1]. |
| `switch_menu.cpp`[cite: 1] | `switch` dengan `break` dan `default`; coba hapus `break`-nya[cite: 1] | Mengimplementasikan menu pilihan menggunakan struktur `switch-case` serta memahami peran perintah `break` dan `default`[cite: 1]. |
| `sinilai_v03_awal.cpp`[cite: 1] | Starter SiNilai v0.3: bagian v0.2 sudah jadi, lengkapi huruf mutu, status, keterangan[cite: 1] | Berkas awal proyek SiNilai v0.3 yang perlu dilengkapi logika penentuan huruf mutu, keterangan nilai, dan status kelulusan[cite: 1]. |
| `contoh_masukan.txt`[cite: 1] | Masukan uji yang sama dengan pertemuan sebelumnya[cite: 1] | Berkas teks berisi sampel data masukan untuk menguji program secara otomatis/konsisten[cite: 1]. |
| `.vscode/`, `.gitignore`[cite: 1] | Sama dengan pertemuan sebelumnya[cite: 1] | Berkas konfigurasi editor Visual Studio Code dan aturan pengabaian berkas pada repository Git[cite: 1]. |

---

## Kasus Uji SiNilai v0.3[cite: 1]

Kasus uji berikut digunakan untuk memastikan logika penentuan huruf mutu, keterangan, dan status pada aplikasi **SiNilai v0.3** berjalan dengan benar[cite: 1]:

| Empat komponen | Nilai akhir | Huruf | Keterangan | Status |
| :--- | :--- | :--- | :--- | :--- |
| `contoh_masukan.txt`[cite: 1] | 83.975[cite: 1] | A[cite: 1] | Sangat baik[cite: 1] | Lulus[cite: 1] |
| `80 x4`[cite: 1] | 80[cite: 1] | A[cite: 1] | Sangat baik[cite: 1] | Lulus[cite: 1] |
| `79.9 x4`[cite: 1] | 79.9[cite: 1] | B+[cite: 1] | Baik[cite: 1] | Lulus[cite: 1] |
| `60 x4`[cite: 1] | 60[cite: 1] | C[cite: 1] | Cukup[cite: 1] | Lulus[cite: 1] |
| `59.9 x4`[cite: 1] | 59.9[cite: 1] | D[cite: 1] | Kurang[cite: 1] | Belum lulus[cite: 1] |
| `30 x4`[cite: 1] | 30[cite: 1] | E[cite: 1] | Sangat kurang[cite: 1] | Belum lulus[cite: 1] |

---

## Yang Dikumpulkan Mahasiswa[cite: 1]

Folder `p04` di repository `pt-NPM` berisi `sinilai_v03.cpp` dan `README.md`. Lihat Modul Pertemuan 4 untuk detail lebih lengkap[cite: 1].

---

## Deklarasi AI[cite: 1]

*(Tuliskan alat AI yang digunakan, prompt/perintah yang diberikan, serta umpan balik dari penggunaan AI dalam pengerjaan tugas ini)*[cite: 1]