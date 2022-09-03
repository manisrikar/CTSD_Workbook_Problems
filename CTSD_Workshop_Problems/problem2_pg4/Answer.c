/*QUESTION
Gopal likes problems solving. 
If he solves one problem on first day, 
on second day he solves two more than first day's count and so on.
Find the number of problems solved on the nth day. 
If he takes p minutes to solve each problem, 
find the total hours he spent on problem solving in that month.*/

#include<stdio.h>
int main()
{
	float days,nop,p,hrs;
	printf("enter days,minutes to solve:: ");
	scanf("%f,%f",&days,&p);
	printf("total problems solved:: %f\n",days*days);
	printf("total time spent on problems till now %f hours",((days*days)*p)/60);
	return 0;
}