#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 100
int main()
{
	char buffer[BUFFER_SIZE];
	while(1)
	{	
		printf("$ ");
		gets(buffer);//not safe
		printf("%s:%d\n",buffer,strlen(buffer));
	}
	return 0;
}
