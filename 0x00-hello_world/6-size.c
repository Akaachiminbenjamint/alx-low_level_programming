/*
 * File: 6-size.c
 * Author: Terfa Ben
 */
#include <stdio.h>
/**
 * main - prints the size of various types on the computer
 * \t it is compiled and run on
 * \t followed by a newlind
 * Return: Always 0.
 */
int main(void)
{
	printf("size of char: %zu byte(s)\n", sizeof(char));
	printf("size of long int: %zu byte(s)\n", sizeof(long int));
	printf("size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of float: %zu byte(s)\n", sizeof(float));
	printf("size of int: %zu byte(s)\n", sizeof(int));
	return (0);
}
