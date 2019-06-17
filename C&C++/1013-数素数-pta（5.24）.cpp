#include<stdio.h>
#include <iostream>
using namespace std;
bool prime(int  x){
    if(x<2)return false;
    for(int i=2;i<x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int m,n;
    int t=0;
    cin>>m>>n;
    for(int i = 1;i<10000;i++){
        if(prime(i)){
            t++;
            if(t<=n&&t>=m){
               cout<<i;
            	if(t<n){
            		if((t-m+1)%10==0) cout<<"\n";
                	else cout<<" "; 
				}
            }else continue;
        }
    }
//    cout<<("Hello world!");
    return 0;
}



