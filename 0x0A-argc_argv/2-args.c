#include "main.h"
#include <stdio.h>
/**
 * main - print the name of the program
 * @argc: count arguements
 * @argv: arguements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
