#include <stdio.h>

int main() {
for(int i = 0; i <= 4; i++){
int sec, hari, jam, menit, detik;
scanf("%d", &sec);

if(sec <= 86400){
jam = sec / 3600;
detik = sec - (3600 * jam); menit = detik / 60;
detik = detik - (60 * menit);
printf("%.2d:%.2d:%.2d\n\n", jam, menit,
detik);
}
else{
hari = sec / 86400;
jam = (sec - (hari * 86400)) / 3600;
menit = ((sec - (hari * 86400)) - (jam *3600)) / 60;
detik = ((sec - (hari * 86400)) - (jam * 3600)) - (menit *60);
printf("%d hari %.2d:%.2d:%.2d\n\n", hari, jam, menit, detik);
}}
return 0;
}


