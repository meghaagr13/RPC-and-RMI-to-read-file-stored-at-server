#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
char *data;
int bytes = (1024)*(1024);
data = (char *)malloc(bytes);
for(int i=0;i<bytes;i++)
{
	data[i] = (char)rand();
printf("%c\n",data[i]);
}
return 0;
}
