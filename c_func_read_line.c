#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 100
int main()
{
	int k;
	char buffer[BUFFER_SIZE];
	while(1)
	{	
		printf("$ ");
		k=read_line(buffer,BUFFER_SIZE);
		printf("%s:%d\n",buffer,k);
	}
	return 0;
}
int read_line(char str[],int n)
{
	int ch, i=0;
	while((ch =getchar())!='\n')
	{
		if(i<n)
		{
			str[i++]=ch;
		}	
	}
	str[i]='\0';
	return i;
}
