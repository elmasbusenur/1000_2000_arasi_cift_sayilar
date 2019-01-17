//1000 ve 2000 arasindaki cift sayilari yazdirmak
#include<stdio.h>
int main(){
	int sum=0;
	int i;
 
 for(int i=1000;i<2000;i++)
 {
 	if(i%2==0)
 	  printf("%d\n", i);
 	  sum=sum+i;
 	  
 }
 
 printf("sum=%d",sum);
 	
return 0;
}
