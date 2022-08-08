#include <stdio.h>
int main(void)
{
	float e = 2.718281828;

	printf("%.0f\n", e);
	printf("%.0f.00\n", e);
	printf("%.1f00\n", e);
	printf("%.2f00\n", e);
	printf("%.6f00\n", e);
	printf("%f00\n", e);/*no precision falls for a default */
	printf("%.7f00\n", e);
	return (0);
}
