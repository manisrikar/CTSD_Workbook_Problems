/*	QUESTION
Latha is learning about the C library math.h functions. 
She found that there is tan() function in math.h header file. 
She wants to calculate tan 45°, 
but she finds that tan function accepts angle in only radians. 
Help Latha to convert 45° to radians and calculate the value of tan45°. 
(Hint: 1 degree =n/180 radians)*/

#include<stdio.h>
#include<math.h>
int main()
{
	float radians;
	radians=45*(3.14/180);
	printf("value of tan45 is %f",tan(radians));
	return 0;
	
}