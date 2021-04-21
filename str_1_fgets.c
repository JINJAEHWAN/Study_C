#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 100
int main()
{
	char buffer[BUFFER_SIZE];
	while(1)
	{	
		printf("$ ");
		fgets(buffer,BUFFER_SIZE,stdin);
		printf("%s:%d\n",buffer,strlen(buffer));
	}
	return 0;
}
