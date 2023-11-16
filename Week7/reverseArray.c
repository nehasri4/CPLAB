#include<stdio.h>
int main()
{
	int a[10];
	int i,j,n,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0,j=n-1;i<j;i++)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		j--;
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
