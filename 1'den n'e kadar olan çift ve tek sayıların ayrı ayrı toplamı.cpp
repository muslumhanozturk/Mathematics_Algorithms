#include <stdio.h>
#include <conio.h>
 
//1'den n'e kadar olan çift ve tek sayýlarýn ayrý ayrý toplamý
 
int main(){
    
    int adet, sayacTek = 0, sayacCift = 0, toplamTek = 0, toplamCift = 0, i;
    
    printf("Lutfen kontrol edilecek n degerini giriniz: ");
    scanf("%d", &adet);
    
    if( adet <= 0 ){     
        printf("Lutfen 0 dan buyuk deger giriniz!!!");
        getch();
        return 0;        
    }
    
    for ( i=1; i<=adet; i++ ){ 
        
        if( i % 2 == 0){
            toplamCift+=i;    
            sayacCift++;       
        }    
        
        else{
            toplamTek+=i;
            sayacTek++;    
            
        }
        
    }
    
    if( adet != 1){      
        printf("****Cift Sayilar***\n");
        printf("Toplam= %d\n", toplamCift);    
    
    }
    
    printf("****Tek Sayilar***\n");
    printf("Toplam= %d\n", toplamTek);
    
    getch();
    return 0;
    
}
