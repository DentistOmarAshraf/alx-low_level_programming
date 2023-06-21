#include<stdio.h>
/**
 * main - Entry Point
 *
 * Description: print numbers followed by ,
 *
 * Return: Alwyas 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
		if (x == 9){
			putchar((x) + '0');
		}else{
		putchar(x + '0');
		putchar(44);
		putchar(32);
		}
	}
	return (0);
}
