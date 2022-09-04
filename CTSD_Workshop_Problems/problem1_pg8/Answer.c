/*Raja wants to become fit for which he decided to walk to the office 
and return home by walking. It is known that Raja's office is X kms away from his home. 
If his office is open on 5 days a week, 
find the number of kilometers Raja travels through office trips in a week.*/

#include<stdio.h>
int main()
{
	float kms;
	printf("enter kilometers::");
	scanf("%f",&kms);
	printf("THE NO OF KILOMETERES TRAVELED:: %.1f kms",(kms*2)*5);
	return 0;
}