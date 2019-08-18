#include<stdio.h>
#include<conio.h>
void main()
{
	int i = 0;
	char str[10] = "Garyvee",str2[10];
	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str2[i] = str[i] - 32;
		}
		else
			str2[i] = str[i] + 32; 
		i++;	
	}
	puts(str2);
	getch();
}
