#include<stdlib.h>
#include<stdio.h>
main()
{
      char isim[10],harfsayisi;
      printf("adinizi yaziniz\n");
      gets(isim);
      printf("merhaba %s",isim);
      //printf("\nbas harfi = %c\n",isim[0]);
      while(isim[harfsayisi]!='\0')
       harfsayisi++;
      printf("\n");
      printf("Adinin ters hali\n");
      while(harfsayisi>=0) 
      {
      printf("%c",isim[harfsayisi]);
      harfsayisi--;
      }
      
      getchar();
      }
