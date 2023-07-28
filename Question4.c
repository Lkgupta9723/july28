#include<stdio.h>
#include<math.h>
int main(){
	int a,d,e,n,count=0,sum=0;
	printf("Enter a number =");
	scanf("%d",&a);
	d=a;
	e=a;
	while(a){
		a=a/10;
		count++;
	}
	for(int i=1;i<=count;i++){
		n=d%10;
		sum=sum+pow(n,count);
		d=d/10;
	}
	if(e==sum)
		printf("Number is armstrong");
	else
		printf("Number is not armstrong");
}