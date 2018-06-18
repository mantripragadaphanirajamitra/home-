#include<stdio.h>
#include<conio.h>
int main()
{
	float sub1,sub2,sub3;
	float sum,average;
	printf("enter marks in three subjects:\n");
	scanf("%f%f%f",&sub1,&sub2,&sub3);
	sum=sub1+sub2+sub3;
	average=sum/3.0;
	printf("sum=%.2f\n",sum);
	printf("average=%.2f\n",average);
	return 0;
	getchar();
}
