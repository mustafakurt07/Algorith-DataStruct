#include<stdio.h>
main()
{
      double agirlik=100;
      int yg,s=0;//(s) toplam kac gunde bitecegini belirtir
      printf("yari omur  giriniz\n");
      scanf("%d",&yg),
      getchar();
      while(agirlik>1.0)
      {
             agirlik=agirlik/2.0;
             s += yg;
                      }
                      
      printf("toplam gun sayisi=%d",s);
      
      
      getchar();
      }
      
