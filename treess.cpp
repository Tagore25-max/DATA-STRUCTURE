#include<stdio.h>
#include<stdllib.h>
struct trees
{
	struct trees *left;
	int data;
	struct trees *right;
};
struct trees create()
{
	struct trees *newnode=0;
	int a;
	printf("\n enter data(-1 for no nodes):");
	scanf("%d",&a);
	if(a==1)
	{
		return 0;
	}
}
newnode=(struct trees *)malloc(sizeof(struct trees));
newnode->data=a;
printf("\n enter left child of %d",a);
newnode->left=-create();
printf("\n enter right child of %d",a);
newnode->right=create();
return newnode;
}

