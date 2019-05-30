#include<stdio.h>  // 18/20,Á½¸ö²âÊÔµã´íÎó 
int main(){
	int N,num;
	int a_num[5]={0},A[5]={0};
	scanf("%d",&N);
	for(int i=0;i<N;++i){
		scanf("%d",&num);
		if(num%10==0){//A1
			a_num[0]++;
			A[0]+=num;
		}else if(num%5==1){//A2
			a_num[1]++;
			if(a_num[1]%2==1) A[1]+=num;
			else A[1]-=num;
		}else if(num%5==2){//A3
			a_num[2]++;
			A[2]++;
		}else if(num%5==3){//A4
			a_num[3]++;
			A[3]+=num;
		}else{//A5
			a_num[4]++;
			if(num>A[4]) A[4]=num;
		//	else continue;
		}
	}
//	for(int j=0;j<5;++j){
//		if(a_num[j]==0){
//			printf("N");
//		}else{
//			printf("%d",A[j]);
//		}
//		if(j<4) printf(" ");
//	}
if(a_num[0]==0)printf("N ");
else printf("%d ",A[0]);
if(a_num[1]==0)printf("N ");
else printf("%d ",A[1]);
if(a_num[2]==0)printf("N ");
else printf("%d ",A[2]);
if(a_num[3]==0)printf("N ");
else printf("%.1f ",(double)A[3]/a_num[3]);
if(a_num[4]==0)printf("N");
else printf("%d",A[4]);
	return 0;
} 



//#include<stdio.h>
//int main(){
//	int count[5]={0};
//	int ans[5]={0};
//	int n,temp;
//	scanf("%d",&n);
//	for(int i=0;i<n;++i){
//		scanf("%d",&temp);
//		if(temp%10==0){
//			count[0]++;
//			ans[0]+=temp;
//		}else if(temp%5==1){
//			if(count)
//		}
//	}
//}
