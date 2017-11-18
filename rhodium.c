#include <stdio.h>
int main(void)
{
	float weight;
	float value;
	printf("Are you worth your weight in rhodium?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weigth in pound:");
	scanf("%f",&weight);
	value=770*weight*14.5833;
	printf("your weight in rhodium is worth $%.2f.\n",value);
	printf("you are easily worth that! IF worth rhodium prices drop.\n");
	printf("eat more to maintain your value.\n");
	return 0;
}
