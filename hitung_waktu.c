#include <stdio.h>
#include <time.h>

int main() {
int JAM,MENIT,DETIK;
time_t AWAL=0, AKHIR=0;
AWAL = time( NULL );
    printf("masuukan perhitungan waktu mundur\n");
    printf("massukan JAM :"); scanf("%d",&JAM);
    printf("massukan MENIT :"); scanf("%d",&MENIT);
    printf("massukan DETIK :"); scanf("%d",&DETIK);
    printf("==================================\n");
    printf(" START\n");
while ( (JAM != 0) || (MENIT != 0) || (DETIK !=0) ) {
AKHIR = time( NULL );
    if (AKHIR > AWAL) {
        if (DETIK==0) {
            if (MENIT==0) {
                if (JAM==0) {
            } else {
            JAM--;
            MENIT = 59;
            DETIK = 59;
            }
        } else {
        MENIT--;
        DETIK = 59;
        }
    } else {
    DETIK--;
    }
printf("Waktu %02d:%02d:%02d \n", JAM, MENIT,DETIK);
if(JAM==0&&MENIT==0&&DETIK==0) {
    printf("SELESAI\n");
}
AWAL = time( NULL );
}
}
return 0;
}