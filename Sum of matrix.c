#include<stdio.h>
int main()
{
	int a[5][5],b[5][5],c[5][5];
	int i,j,m,n,p,q;
	printf("Enter the size of Matix A : ");
	scanf("%d%d",&m,&n);
	printf("Enter the size of Matix B : ");
	scanf("%d%d",&p,&q);
	
	if(m==p,n==q)
	{
	printf("Enter the elements in Matix A : ");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf("Enter the elements in Matix B : ");
	for(i=0;i<p;i++)
		for(j=0;j<q;j++)
			scanf("%d",&b[i][j]);
	
	
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			c[i][j]=a[i][j]+b[i][j];
	
	printf("Matix addition = \n");
	for(i=0;i<p;i++) 
		for(j=0;j<q;j++)
{
			printf("%d ",c[i][j]);
		printf("\n");
	}
	} else
	printf("Matrix addition is not possible");
}

