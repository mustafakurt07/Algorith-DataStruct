#include<stdio.h>
main()
{
      int sayi=1000001,bolen=2,tambolensayisi=0;
      while(sayi<=1001000)
      {
                      bolen= 2;
                      tambolensayisi=0;
      while(bolen<sayi)
      {
                       if(sayi%bolen==0){
                       tambolensayisi++;
                       break;
                       
                       }
                       bolen++;
                       }
                       if(tambolensayisi==0)
                       
                                            printf("%d\n",sayi);
                                            sayi+=2;
                                            
                       
                       
                       
                       }
                     getchar();
                     }
