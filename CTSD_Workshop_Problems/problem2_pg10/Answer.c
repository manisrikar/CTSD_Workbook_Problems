/* QUESTION
A participant can make 1 submission every 30 seconds. 
If a contest lasts for X minutes, 
what is the maximum number of submissions that the participant can make during it? 
It is also given that the participant cannot make any submission in the last 5 seconds of the contest.*/

#include <stdio.h>

int main() {
	    int x;
	    printf("enter contest time::");
	    scanf("%d",&x);
	    x=x*2;
	    printf("the no of problems solved is %d\n",x);
	
	return 0;
}