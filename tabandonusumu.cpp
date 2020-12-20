#include<stdio.h>
int ikilik(
{
    




return yenisayi;
}


int cevir(int sayi,int taban)
{
    int yenisayi=0,kat1;
    while(sayi=0)
    {
                 yenisayi=yenisayi+kat*(sayi%taban);
                 kat=kat*10;
                 sayi=sayi/taban;
                 }
                 return yenisayi;
                 }
                                                     int onlukacevir(int sayi,int taban)
                                                          {
                                                            int yeni=0;int kat=1;
                                                             while(sayi>0)
                                                              {
                                                                yeni=yeni+kat*sayi%taban;
                                                                  kat=kat*taban;}
                                                                    return yeni;
                                                                     }
main()
{
      int sayi,taban;
      printf("10luk tabandaki sayiyi giriniz\n");
      scanf("%d",&sayi);
      printf("hangi tabana ceviriyim");
      scanf("%d",&taban);
      printf("%d",onlukcevir(sayi,taban);
      getchar();
      }
      
