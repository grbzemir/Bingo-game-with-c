#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<stddef.h>

int kural(int e , int d , int s)
{
    int buyuk;
    int orta;
    int kucuk;

    if(e>d && e>s)
    {
        if(d>s)
    {
        orta=d;
        kucuk=s;
    }    
    else {
        orta=s;
        kucuk=d;
    }
    buyuk=e;
    }
   else if(d>s&&d>e){
		if(e>s){
			orta=e;
			kucuk=s;
		}
		else{
			orta=s;
			kucuk=e;	
		}
		buyuk=d;
	}
	else{
		if(d>e){
			orta=d;
			kucuk=e;
		}
		else{
			orta=e;
			kucuk=d;	
		}
		buyuk=s;
		
	}
	if(buyuk-kucuk>orta){
		return 0;
	}
	else{
		return 1;
	}
}

int main ()
{
    printf("oyuna baslamak icin bir tusa basiniz..\n");
    getch();
    char cevap='e';
    while(cevap=='e' || cevap=='E')
    { 
       int x,y,z;
       int toplam=0;
       int kontrol=1;
       int cot=1;
       while(cot==1)
    {
        srand(time(NULL));
        x=rand()%99+1;
        y=rand()%99+1;
        z=rand()%99+1;

        if(x==y || y==z || x==z)
        {
            cot=1;
        }
        else
        {
            cot=0;
        }
    }
    system("color 0a");
    printf("\nTas1 : %d \n",x);
    printf("Tas2 : %d \n",y);
    printf("Tas3 : %d \n",z);

    toplam=x+y+z;
    int i;
    int dogru=0;

    for(i=2;i<toplam;i++)
    {
        if(toplam%i==0)
        {
            dogru=0;
            break;
        }
    }
    dogru=1;
    if(toplam<150){
		printf("tebrikler ,kazandiniz. (1. kural) \n");
		kontrol=0;
        }
    	if(dogru==0){
		printf("tebrikler ,kazandiniz. (2. kural) \n");
		kontrol=0;
    	}
    	if(kural(x,y,z)==0){
		printf("tebrikler ,kazandiniz. (3. kural) \n");
		kontrol=0;
    	}
    	if(kontrol==1){
		printf("maalesef kaybetiniz... \n");
    	}
    	printf("oyuna devam etmek icin [e/E] \n");
    	cevap=getche();	
	}	
}
    

   

