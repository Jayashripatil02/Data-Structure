#include<stdio.h>
void insert(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0&&temp<=a[j])
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
}
void printarr(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\n\n",a[i]);
		//cin<<i;
	}
}
int main()
{
	int a[]={34,5,21,20,10,15,98,88,80};
	int n=sizeof(a)/sizeof a[0];
	printarr(a,n);
	insert(a,n);
	printarr(a,n);
	return 0;
}
