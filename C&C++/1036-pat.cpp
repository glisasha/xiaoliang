#include<stdio.h>
int main(){
	int n,m;//分别为列、行 
	char c;
	scanf("%d %c",&n,&c);
	getchar();
	if(n%2==0){
		m=n/2;
	}else m=n/2+1;
	for(int i=0;i<n;++i) printf("%c",c);//第一行 
		printf("\n");
	for(int i=2;i<m;++i){//第2行~~第m-1行 
		printf("%c",c);
		for(int j=0;j<n-2;++j) {
			printf(" ");		
		} 
		printf("%c\n",c);
	}
	for(int i=0;i<n;i++) printf("%c",c);//第m行 
	return 0;
}
