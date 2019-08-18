/*
What is a magic number?

Find the sum of digits of the given number.(1 + 7 + 2 + 9 => 19)
Reverse of digit sum output.  Reverse of 19 is 91
Find the product of digit sum and the reverse of digit sum.(19 X 91 = 1729)
If the product value and the given input are same, then the given number is a magic number.(19 X 91 <=> 1729)
So, 1729 is a magic number.
*/

#include<stdio.h>
#include<conio.h>
int sum(int n)
{
	int cnt=0;
	int rem;
	while(n>0)
	{
		rem=n%10;
		cnt+=rem;
		n=n/10;	
	}	
	return cnt;
}
int reverse(int n)
{
	int rev=0;
	while(n>0)
	{
		rev=(rev*10)+(n%10);
		n=n/10;
	}
	return rev;
}
void main()
{
	//this is the given input
	int n=1729;
	int sd;
	int rv;
	int pd;
	sd=sum(n);
	rv=reverse(sd);
	pd=sd*rv;
	if(pd==n)
		printf("MAGIC NUMBER");
	else
		printf("NOT A MAGIC NUMBER");
}
