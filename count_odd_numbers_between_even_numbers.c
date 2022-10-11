#include<stdio.h>
int main() {
	int n,o=0,e=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	int cnt=0;
	    for(int i=0;i<n-2;i++){
	        if( arr[i]%2==0 && arr[i+2]%2==0 && arr[i+1]%2==1){
	            cnt++;
	        }
	    }
	printf("%d",cnt);
}