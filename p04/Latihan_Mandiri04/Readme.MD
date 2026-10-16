**soal no 1: Bandingkan dengan gambar 4: apa yang berulang?**
Jawaban: yang berulang adalah pola percabangan/keputusan(if-else bertingkat), dimana struktur pengecekan kondisi nilai >=[batas] selalu diulang ke bawah untuk setiap tingkat nilai dengan mengganti nilai batas dan output huruf mutunya.
**soal no 4: Apa yang berubah pada case?**
Jawaban: Label pada case yang sebelumnya menggunakan nilai integer (case 1:, case 2:) berubah menjadi karakter yang diapit tanda petik tunggal (case '1':, case '2':, case 'k':).
**soal no 5: apakah hasilnya persis sama untuk 79.9?Jelaskan.**
Jawaban: Tidak persis sama / Ada perbedaan.
Penjelasan: Untuk nilai 79.9, pada static_cast<int>(79.9), bagian desimal akan diabaikan (dibulatkan ke bawah) sehingga nilainya menjadi 79. Ketika dibagi 10 (79 / 10), hasilnya secara pembagian bulat adalah 7. Program switch akan masuk ke case 7 dan mencetak huruf mutu B. Hal ini sesuai dengan logika batas >=70. Namun, perbedaan bisa terjadi jika logika range pembulatan pada skala pecahan tidak dihitung secara presisi tanpa konversi tipe data yang sesuai.