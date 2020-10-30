#include <stdio.h>

int main( int arg, char *argv[])
{
	int age = 10;
	int height = 72;
	int ch;


	printf("I am %d years old. \n",age);
	printf("I am %d inches tall. \n",height);

	for(ch=0; ch<=100; ch++)
	{
		printf("Ascii value = %d Character = %c HEX= %x\n",ch,ch,ch);
	}

	return 0;
}