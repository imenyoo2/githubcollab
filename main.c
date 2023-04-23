#include "main.h"

int main(void)
{
	printint(1938383);
	printhex(1938383);
}


void printint(int n)
{
  if (n < 10)
  {
    _putchar('0' + n);
  }
  else
  {
    printint(n / 10);
    _putchar('0' + n % 10);
  }
}
