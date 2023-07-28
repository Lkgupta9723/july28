#include<stdio.h>
int main()
{
    int a;
    for(int i=1;i<=100;i++){	
 	   if(i%5==0&&i%11==0)
    		printf("%d ",i);
    }
    return 0;
}