#include<stdio.h>
 int main(){
 	
int n ,m;
printf("nhap so n ");
 scanf("%d", &n);
 int t[n]={};
 for(int i=0;i<n;i++){	
 printf("nhap phan tu : ");
 scanf("%d",&m);
 	if(m% 2==1){
 	t[i]=m;		 	
}
	 else{
	 	printf("nhap lai \n");
	 i--;
	 }
}
        	printf("cac phan tu la :  ");
    for(int i=0 ; i<n ; i++){
		printf("%d ",t[i]);
}
return 0;
}
