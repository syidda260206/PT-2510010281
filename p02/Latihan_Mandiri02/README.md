3. Perbedaan int nilai = 85.7; dan int nilai{85.7};

int nilai = 85.7; (Copy Initialization)
Compiler melakukan konversi otomatis (implicit conversion/truncation) dengan membuang angka di belakang koma tanpa error. Nilai yang tersimpan adalah 85.   

int nilai{85.7}; (Direct List Initialization / Uniform Initialization)
Compiler memicu error (narrowing conversion error) karena C++ modern melarang penyempitan tipe data (mengubah double/pecahan menjadi int/bilangan bulat secara langsung dalam format kurung kurawal {}).