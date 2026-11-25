# Deklarasi Penggunaan AI: SiNilai v0.8

- **Alat:** Claude
- **Dipakai untuk:** membantu memeriksa enam fungsi TODO pada `sinilai_v08.cpp`
  (`rerataKelas`, `hitungLulus`, `indeksTertinggi`, `urutkanMenurun`,
  `cetakPeringkat`, `hitungSebaran`). Kerangka program, fungsi v0.7, `main`, dan
  prototipe berasal dari berkas tugas, bukan dari AI.
- **Cara memeriksa:**
  1. Mengompilasi dengan `g++ -std=c++17 -Wall -Wextra -Wpedantic`: tanpa error dan tanpa warning.
  2. Menjalankan program dengan `contoh_masukan.txt` dan membandingkan keluarannya
     dengan modul B.5 (hanya baris judul, prompt jumlah, dan blok Peringkat Kelas
     yang berbeda dari v0.7).
  3. Menelusuri kode: perulangan memakai `i < jumlah` (tidak keluar batas),
     `urutkanMenurun` menukar keempat larik sejajar bersama, `jumlah` dibatasi 1 sampai `MAKS`.
