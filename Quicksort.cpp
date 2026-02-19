#include<stdio.h>
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a =*b;
	*b = temp;
}
int partition(int a[],int lb, int ub)
{
	int pivot =a[lb];
	int start = lb;
	int end = ub;
	while(start<end)
	{
		while(a[start]<=pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			swap(&a[start],&a[end]);
		}
	}
	swap(&a[lb],&a[end]);
	return end;
}
void quicksort(int a[],int lb,int ub)
{
	if(lb<ub)
	{
		int location;
		location = partition(a,lb,ub);
		quicksort(a,lb,location-1);
		quicksort(a,location+1,ub);
	}
}
int main()
{
	int n;
	printf("\n enter n size :");
	scanf("%d",&n);
	int a[n];
	printf("\n enter %d elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	printf("\n After Sorting :");
	for(int i=0;i<n;i++)
	{
		printf("\t %d",a[i]);
	}
	return 0;
}
