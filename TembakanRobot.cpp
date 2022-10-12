// NAMA		: RHENALDY CHANDRA
// NRP		: 5025221190
// Jurusan	: TEKNIK INFORMATIKA

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SIN90 1 //sudut elevasi tembakan

int mencari_V0(int vtan, int vberkurang)
{
	/* Tulis fungsi mencari v0 kalian disini */
  	return (vtan - vberkurang); 
}

int speed_dgn_loss(int vberkurang)
{
	/* tulis fungsi hitung_loss kalian disini */
	if (vberkurang>=1 && vberkurang<=10){
		vberkurang = 1;
	}
	else if (vberkurang>=11 && vberkurang<=20){
	    vberkurang = 3;
    }
	else if (vberkurang>=21 && vberkurang<=30){
		vberkurang = 5;
    }
    return vberkurang;
}

int main() {
    /* tulis kode utama kalian disini */
    	int vtan,jarak,vberkurang;
    	double v0,kecepatanawal;
  	/* input adalah kecepatan tangensial maksimum roller */
  	/* std::cin >> input */
    std::cin >> vtan;
    vberkurang = speed_dgn_loss (vtan);
    v0 = mencari_V0 (vtan, vberkurang);
    jarak = ((v0 * v0) * SIN90) / GRAVITASI;
    kecepatanawal =  sqrt(jarak * GRAVITASI) + vberkurang;
  	/* std::cout << jarak << " " << kecepatan tangensial << std::endl */
  	std::cout << jarak << " " << kecepatanawal << std::endl;
    return 0;
}
