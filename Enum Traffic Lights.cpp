//Enum Traffic Lights
#include<stdio.h>
enum floors{red=1,yellow,green};
int main()
{
	int c;
	printf("\n enter choice");
	scanf("%d",&c);
	switch(c)
	{
		case red :
			printf("\n Stop");
			break;
		case yellow :
			printf("\n Ready To Go");
			break;
		case green :
			printf("\n GO");
			break;
			default :
				printf("\n Error");
	}
	return 0;
	}
