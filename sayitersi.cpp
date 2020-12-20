#include <stdio.h>
//Girilen sayinin tersini alma
 
int main() {
 
    int sayi, ters = 0,toplam=0,gecici;
    
    printf("Tersini almak istediginiz sayiyi giriniz: ");
    scanf("%d", &sayi);
    getchar();
    gecici=sayi;
    while (sayi != 0) {
        ters *= 10;
        ters += sayi % 10;
        sayi /= 10;
       
        
       
    }
    toplam=ters+gecici;
    printf("%d\n", ters);
    printf("%d\n",toplam);
 getchar();
    return 0;
}
