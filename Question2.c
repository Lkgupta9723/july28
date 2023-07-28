#include<stdio.h>
int main(){
	int a,b=0,n,d;
	printf("Enter a number =");
	scanf("%d",&a);
	d=a;
	while(a){
		n=a%10;
		b=b*10+n;
		a=a/10;
	}
	if(b==d){
		printf("Number is a pallindrome");
	}
	else
		printf("Number is not a pallindrome");
}