#include<stdio.h>
short int stack[10]={0};
short int ust=0;
short int kapasite=10;
void goster()
{
	short i;
	if(ust==0)
	printf("STACK BOS GARDAS\n");
	else {
		for(i=0;i<ust;i++)
		printf("%d--",stack[i]);
		
		
		
	}
	
	
	
}
			void ekle(short neyi)
		{
		if(ust==kapasite)
		printf("stack dolu gardas :)");
		else{
	
		stack[ust]=neyi;
		ust++;
}
	
	
	
		
		}
		short cikar()
		{
			if(ust==0){
			printf("cuval bos gardas");return  -1;
		}
			else{
			
			short neyi=stack[ust-1];
			ust--;
			return neyi;
		}
		}
			void bubbleSort(int stack[], int kapasite)
{
     int temp;
     int i, j;
 
     for (i=1; i<kapasite;i++)
     {
         for (j=0; j<kapasite-1-i; j++)
         {
             if(stack[j] > stack[j+1])
             {
                        temp = stack [j];
                        stack [j] = stack [j+1];
                        stack [j+1] = temp;
             }
         }
     }
}
			
		

int main ()
{
	ekle(34);ekle(94);
	ekle(7);ekle(1);
	goster();
	printf("\ en ustteki ==>%d\n",cikar());
	goster();
	bubbleSort(int stack[],int kapasite);
	return 0;
}
