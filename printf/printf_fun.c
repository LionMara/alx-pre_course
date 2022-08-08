#include <stdio.h>

/**
 * main - transform lives
 *
 * Return: nada
 */
int main(void)
{
	/* normal printing */
	printf("Hello terminal\n");

	/*special characters used by printf*/
	printf("backlash: \\ \n");
	printf("Double quote \" \n");
	printf("Single quote \' \n");
	printf("Percentage %% \n");

	/* special chararacters because of backlash*/
	printf("Beep: \a \n");
	printf("Backspace: \b\n");
	printf("Form feed: \f\n");
	printf("\n");
	printf("Carriage Return: \r\n");
	printf("Tab: \t \n");
	printf("Vertical tab: \v\n");
	return (0);
}
