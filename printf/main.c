#include "./includes/libftprintf.h"
#include <stdio.h>

int main()
{
	int a = 0;
	int i = ft_printf("\n<%-12p>", &a);
	printf("\nft = <<<< %d >>>>", i);
	
	int j = printf("\n<%-12p>", &a);
	printf("\nii = <<<< %d >>>>", j);
}
