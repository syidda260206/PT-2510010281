**SOAL NOMOR 3**
**Pertanyaan**: Kapan keduanya(Nilai akhir dan Rerata Polos) sama persis?
**Jawaban**: Nilai Akhir dan Rerata Polos akan bernilai sama persis ketika semua komponen nilai (Kehadiran, Mingguan, UTS, dan UAS) nilainya sama (misalnya keempatnya sama-sama bernilai 80).
Hal ini terjadi karena total seluruh bobot bernilai 100%, sehingga jika semua komponen angkanya seragam, hasil perkalian bobot maupun rata-rata biasanya akan menghasilkan angka yang persis sama dan selisihnya menjadi nol.

**SOAL NOMOR 4**
**Tiga ekspresi yang diambil untuk diuji adalah**:
1. 2 * 3 / 4 (operasi perkalian dan pembagian)
2. 2 / 4 * 3 (urutan pembagian sebelum perkalian)
3. increment pada variabel: hitung++ (didalam C++, diawali dari int hitung = 10 lalu dilakukan beberapa operasi assignment)
**Catatan hasil dan alasan perbedaannya**
1. Ekspresi 2 * 3 / 4
C++: Menghasilkan 1. Karena kedua operand bertipe bilangan bulat (int), C++ melakukan integer division (membuang bagian desimal).  
Python: Menghasilkan 1.5. Operator / di Python selalu menghasilkan bilangan pecahan (float).

2. Ekspresi 2 / 4 * 3
C++: Menghasilkan 0. Pada C++, pembagian 2 / 4 menghasilkan 0 (karena desimal dibuang), lalu 0 * 3 tetap 0.   
Python: Menghasilkan 1.5. Python membagi 2 / 4 menjadi 0.5, lalu dikalikan 3 sehingga hasilnya 1.5.

3. Ekspresi hitung++
C++: Berhasil dieksekusi dan menambah nilai hitung sebesar 1.   
Python: Akan menyebabkan error (SyntaxError) jika ditulis hitung++. Python tidak mendukung operator post-increment (++), sehingga harus diganti menggunakan hitung += 1.
