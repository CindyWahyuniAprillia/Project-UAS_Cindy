#include <stdio.h>
#include <stdlib.h>

typedef struct{
        char nama_barang[50];
        int harga;
    } Barang;

    int main(){
        printf("\t\t=======================================================\t\t :");
        printf("\t\t-------------------- SELAMAT DATANG -------------------\t\t :");
        printf("\t\t----------------- SELAMAT BERBELANJA ------------------\t\t :");
        printf("\t\t=======================================================\t\t :");

       Barang daftar_barang[] = {
            {"  Minyak Goreng                 ", 46000},
            {"  Detergen                     ", 50000},
            {"  Sunlight                     ", 25000},
            {"  Vixal                        ", 20000},
            {"  So Klin Lantai               ", 15000},
            {"  Parfum                       ", 40000},
            {"  Baygon Semprot 750ml         ", 50000},
            {"  Tissue Passeo                ", 20000},
            {"  Soffel                       ", 15000},
            {"  Pepsodent                    ", 18000},
            {"  Pengharum Ruangan Matic      ", 80000},

        };

        int total_belanja = 0;

        //Loop untuk memilih barang
        while(1){
                printf("\nDaftar Barang:\n");
                for(int i = 0; i < sizeof(daftar_barang)/ sizeof(daftar_barang[0]); ++i){
                        printf("%d: %s - Rp %d\n", i + 1, daftar_barang[i]. nama_barang, daftar_barang[i].harga);
                }

                printf("\nPilih Nomor Barang Yang Ingin Dibeli ( ketik '0' untuk menyelesaikan belanja) :");
                int nomor_barang;
                scanf("%d", &nomor_barang);

                //Cek apakah input adalah 'Selesai'
                if(nomor_barang == 0){
                        break;
                }

                //Cek apakah nomor barang tersedia
                if(nomor_barang >= 1 && nomor_barang <= sizeof(daftar_barang) / sizeof(daftar_barang[0])){
                        total_belanja += daftar_barang[nomor_barang - 1].harga;
                printf("%s ditambahkan ke keranjang.\n", daftar_barang[nomor_barang - 1].nama_barang);
                }else{
                    printf("Nomor Barang Tidak Tersedia. Silahkan Pilih Nomor Barang Yang Lain. \n");
                }

                //Tanyakan apakah pengguna ingin menambahkan barang lagi
                printf("\nApakah Anda Ingin Menambahkan Barang Lagi? (1 /0) :");
                int tambah_lagi;
                scanf("%d", &tambah_lagi);

                if(!tambah_lagi){
                        break;
                }
        }

        //Cek total belanja unuk hadiah pulsa
        if(total_belanja > 150000){
                total_belanja += 50000;
                printf("\nSelamat!!! Anda Mendapatkan Hadiah Pulsa Rp 50000 dari Pembelian di Atas 150000.\n");
        }

        //Tampilkan total belanja
        printf("\nTotal Belanja: Rp %d\n", total_belanja);

        //Ucapan Terimakasih
        printf("\t\t====================================================\t\t :");
        printf("\t\t --------- Terimakasih Atas Pembelian Anda ---------\t\t :");
        printf("\t\t ----------- Selamat Berbelanja Kembali -----------\t\t :");
        printf("\t\t====================================================\t\t :");

    return 0;
}
