#include "stdio.h"


int main() {
	int a=1,b=1,c,i,n;
	printf("Enter the no. of digits:");
	scanf("%d",&n);
		for(i=1;i<=n;i++) {
			c=a+b;
			b=a;
			a=c;
			printf("  %d  \n",c);
		}
}
