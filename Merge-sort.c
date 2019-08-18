/*
 Given two sorted arrays output a merged array without duplicates.
Array1: [1, 2, 3, 6, 9]
Array2: [2, 4, 5, 10]
Merged Array: [1, 2, 3, 4, 5, 6, 9, 10]

*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,s1,s2,s3,temp,j = 0,k = 0;
	int a[10],b[10],c[10];
	printf("Enter the length of arrays");
	scanf("%d%d",&s1,&s2);
	for(i=0;i<s1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<s2;i++)
	{
		scanf("%d",&b[i]);
	}
	s3 = s1+s2;
	//Merging the 2 arrays
	for(i=0;i<s3;i++)
	{
		if(i<s1)
		{
			c[i] = a[j];
			j++;
		}
		else
		{
			c[i] = b[k];
			k++;
		}
	}
	//Sording the merged array 
	for(i=0;i<s3;i++)
	{
		for(j=i;j<s3;j++)
		{
			if(c[i]>c[j])
			{
				temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}
		}
	}
	printf("The merged and sorted array is\n")
	for(i=0;i<s3;i++)
	{
		printf("%d\t",c[i]);
	}
}
