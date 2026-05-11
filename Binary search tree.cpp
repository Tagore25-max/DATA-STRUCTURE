//Binary search tree:
#include<stdio.h>
#include<stdlib.h>
struct tree
{
	struct tree *left;
	int data;
	struct tree *right;
};
struct tree *root=NULL;
int main()
{
	struct tree *nn=0,*c=0;
	int i,n;
	printf("\n enter no.of nodes");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	nn=(struct tree *)malloc(sizeof(struct tree));
	printf("\n enter data");
    scanf("%d",&nn->data);
	nn->left=NULL;
	nn->right=NULL;
	if(i==0)
	{
	root==nn;
	}
else
 {
	c=root;
	while(1)
	{
		if(nn->data > c->data)
	{
	if(c->right==NULL)
	{
	c->right=nn;
	break;
	}
else
	{
	c=c->right;
	}//inner else close
	}//outer if close
else if(nn->data < c->data)
{
	if(c->left==NULL)
	{
	  c->left=nn;
	 break;
	}
	else
	{
		c=c->left;
	}
}//outer else if close
else
{
	printf("\n Duplicate not allowed");
	free(nn);
	break;
}
}//while close
}//outer else close
}//for loop close
}//main close
