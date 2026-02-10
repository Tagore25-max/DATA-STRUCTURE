//Enum Shopping Mall
#include<stdio.h>
enum floors{ladies=1,men,children};
int main()
{
	int c;
	printf("\n enter choice");
	scanf("%d",&c);
	switch(c)
	{
		case ladies :
			printf("\n go to First floor");
			break;
		case men :
			printf("\n go to Second floor");
			break;
		case children :
			printf("\n go to Third floor");
			break;
			default :
				printf("\n entered wrong choice");
	}
	return 0;
	}
