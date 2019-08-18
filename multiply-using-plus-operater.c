/*Write function to find multipication of 2 numbers using +
operator You must use minimu possible iterations.

Input: 3 , 4
Output 12*/

#include<conio.h>
#include<stdio.h>
int main()
{
	int a,b,max=0,temp=0;
	scanf("%d%d",&a,&b);
	max=(a>b)?a:b;
	int min=a<b?a:b;
	
	for(int i=0;i<min;i++)
		{
			temp+=max;		
		}
	printf("\n%d",temp);
	return 0;
}
