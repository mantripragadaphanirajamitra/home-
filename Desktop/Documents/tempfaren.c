#include<stdio.h>
#include<conio.h>
int main()
{

	float fahren, celsius;

	printf("enter temparature in celsius\n");
	scanf("%f" ,&celsius);
	/* convert it into farenheit */
	fahren=(9.0/5.0)*celsius+32;
	printf("%.2fC is equal to %.2fF\n",celsius,fahren);
	getch();
}
