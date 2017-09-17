#include <stdio.h>

#define NEWLINE printf("\n")
#define ll long int
#define PRN(x) printf(x)

int main() {
int i,j,n,SUM,sum=0;
ll a;
printf("size of ll %ld \n",sizeof(a));
for(a=1;a<=4;a++)
{
 for(j=1;j<=a;j++)
{
  printf("%d",j);
}
 NEWLINE;
}

PRN("Enter value of n \n");
scanf("%d",&n);
SUM=n*(n+1)*(2*n+1)/6;
printf(" %d",SUM);

PRN("Enter value of n \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 sum=(i*i)+sum;
}
printf("SUM IS__%d__",sum);
/*

fibonnacci using iteration

1
12 
123
1234

sum of n^2 num

sorting of array

*/


}
