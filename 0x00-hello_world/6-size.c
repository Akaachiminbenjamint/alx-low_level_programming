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
	printf("size of long: %zu bytes\n", sizeof(long));
	printf("size of long long: %zu bytes\n", sizeof(long long));
	printf("size of double: %zu bytes\n", sizeof(double));
	printf("size of long double: %zu bytes\n", sizeof(long double));
	printf("size of float: %zu bytes\n", sizeof(float));
	printf("size of int: %zu bytes\n", sizeof(int));
	printf("size of short: %zu bytes\n", sizeof(short));
	return (0);
}
