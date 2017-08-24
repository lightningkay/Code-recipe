#include <stdio.h>

int main()
{
	int fabo, fabo_tmp;
	fabo = 0;
	fabo_tmp = 1;
	printf("fabo( 0) = %-3d \n",fabo);
	printf("fabo( 1) = %-3d \n",fabo_tmp);
	int temp = 0;
	for (int i = 2; i <= 15; i ++)
	{
		temp  = fabo + fabo_tmp;
		printf("fabo(%2d) = %-3d \n", i, temp);
		fabo = fabo_tmp;
		fabo_tmp = temp; 	
	}
	return 0;
}
