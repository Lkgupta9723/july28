#include<stdio.h>
int main(){
	int a[10]={3,4,1,3,24,53,3,2,13,21};
	int max=a[0],i;
	for(i=0;i<10;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	printf("%d is max",max);
	return 0;
}