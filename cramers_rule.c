#include<stdio.h>
//Cramer's rule...
int main()
{
	int a1,a2,a3,b1,b2,b3,c1,c2,c3,d1,d2,d3,i,j;
	printf("enter the value of the first linear equation:(ax+by+cz=d1).....\n");
	scanf("%d%d%d%d",&a1,&a2,&a3,&d1);
	printf("enter the value of the second linear equation:(ax+by+cz=d2).....\n");
	scanf("%d%d%d%d",&b1,&b2,&b3,&d2);
	printf("enter the value of the third linear equation:(ax+by+cz=d3).....\n");
	scanf("%d%d%d%d",&c1,&c2,&c3,&d3);
	int A[3][3]={{a1,a2,a3},{b1,b2,b3},{c1,c2,c3}},d[3][3]={{d1},{d2},{d3}};
	printf("A matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
	printf("d matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<1;j++)
		{
			printf("%d\n",d[i][j]);
		}
		printf("\n");
	}
	int det_A=A[0][0]*(A[1][1]*A[2][2]-A[2][1]*A[1][2])-A[0][1]*(A[1][0]*A[2][2]-A[2][0]*A[1][2])+A[0][2]*(A[1][0]*A[2][1]-A[2][0]*A[1][1]);
	printf("the determinent of A is:%d\n",det_A);
	if(det_A==0)
	{
		printf("No solution");
	}
	else{
	int p[3][3]={{d1,a2,a3},{d2,b2,b3},{d3,c2,c3}};
	printf("after replacing the first column\n");
	printf("p matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",p[i][j]);
	}
	printf("\n");
}
int det_p=p[0][0]*(p[1][1]*p[2][2]-p[2][1]*p[1][2])-p[0][1]*(p[1][0]*p[2][2]-p[2][0]*p[1][2])+p[0][2]*(p[1][0]*p[2][1]-p[2][0]*p[1][1]);
printf("the determinent of p is:%d\n",det_p);
int q[3][3]={{a1,d1,a3},{b1,d2,b3},{c1,d3,c3}};
printf("after replacing the second column\n");
printf("q matrix is:\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d\t",q[i][j]);
	}
	printf("\n");
}
int det_q=q[0][0]*(q[1][1]*q[2][2]-q[2][1]*q[1][2])-q[0][1]*(q[1][0]*q[2][2]-q[2][0]*q[1][2])+q[0][2]*(q[1][0]*q[2][1]-q[2][0]*q[1][1]);
printf("the determinent of q is:%d\n",det_q);
int r[3][3]={{a1,a2,d1},{b1,b2,d2},{c1,c2,d3}};
printf("after replacing the third column\n");
printf("r matrix is:\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d\t",r[i][j]);
	}
	printf("\n");
}
int det_r=r[0][0]*(r[1][1]*r[2][2]-r[2][1]*r[1][2])-r[0][1]*(r[1][0]*r[2][2]-r[2][0]*r[1][2])+r[0][2]*(r[1][0]*r[2][1]-r[2][0]*r[1][1]);
printf("the determinent of r is:%d\n",det_r);
float x,y,z;
x=det_p/det_A;
y=det_q/det_A;
z=det_r/det_A;
printf("the value of x is:%f\n",x);
printf("the value of y is:%f\n",y);
printf("the value of z is:%f",z);
}
return 0;
}

