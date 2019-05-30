#include<stdio.h>
int f1(int x){
	x=x/2;
	return x;
}
int main(){
	int a,sum=0;//жусз╨цак 
	scanf("%d",&a); 
	while(1){
		if(a%2==0){
			a=f1(a);
			sum++;
		}else{
			a=f1(3*a+1);
			sum++;
		}
		if(a==1)break;
	}
	printf("%d\n",sum);
	return 0;
} 
