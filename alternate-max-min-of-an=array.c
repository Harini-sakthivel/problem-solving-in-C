/*
Sort the array alternately i.e first element should be max value, second min value, third second max, third second min. Eg: arr[] = {1,2,3,4,5,6,7} O/P: {7,1,6,2,5,3,4} Note: no extra space and time complexity should be less;
*/

#include<stdio.h>
#include<conio.h>
int a[10];
int max(int i)
{
	int m=0,temp;
	for(int j=i;j<7;j++)
	{
		if(a[j]>m)
		{
			m=a[j];
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}		
	}
	return m;
}
int min(int i)
{
	int  m=10000,temp;
	for(int j=i;j<7;j++)
	{
		if(a[j]<m)
		{
			m=a[j];
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	return m;	
}
int main()
{
	for(int i=0;i<7;i++)
		scanf("%d",&a[i]);
	
	for(int i=0;i<7;i++)
	{
		if(i % 2 == 0)
			a[i]=max(i);
		else
			a[i]=min(i);	
	}
	
	for(int i=0;i<7;i++)
		printf("%d\t",a[i]);
	return 0;
}
