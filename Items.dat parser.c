#define _CRT_SECURE_NO_WARNINGS
#include "libcdeltaparser.h"

int main()
{
	struct itemsdat itd;
	FILE* my_itemsdat = fopen("items.dat", "rb");
	printf("Welcome to my items.dat parser");
	int resval = parse_itemsdat(my_itemsdat, &itd);

	//error check
	if (resval != 0)
	{
		printf("Error occured in parsing, error code: %d", resval);
		return 1;
	}
	
	return 0;
}