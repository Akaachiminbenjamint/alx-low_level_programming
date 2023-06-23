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
	printf("size of char: %zu bytes\n", sizeof(char));
	printf("size of long int: %zu bytes\n", sizeof(long int));
	printf("size of long long int: %zu bytes\n", sizeof(long long int));
	printf("size of float: %zu bytes\n", sizeof(float));
	printf("size of int: %zu bytes\n", sizeof(int));
	return (0);
}
