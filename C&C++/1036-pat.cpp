#include<stdio.h>
int main(){
	int n,m;//�ֱ�Ϊ�С��� 
	char c;
	scanf("%d %c",&n,&c);
	getchar();
	if(n%2==0){
		m=n/2;
	}else m=n/2+1;
	for(int i=0;i<n;++i) printf("%c",c);//��һ�� 
		printf("\n");
	for(int i=2;i<m;++i){//��2��~~��m-1�� 
		printf("%c",c);
		for(int j=0;j<n-2;++j) {
			printf(" ");		
		} 
		printf("%c\n",c);
	}
	for(int i=0;i<n;i++) printf("%c",c);//��m�� 
	return 0;
}
