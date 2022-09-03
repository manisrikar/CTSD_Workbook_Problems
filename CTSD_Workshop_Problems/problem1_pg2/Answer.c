/*QUESTION:
Ramu has reached the finals of the Annual Inter-school Declamation contest. 
For the finals, students were asked to prepare 10 topics. 
However, Ramu was only able to prepare three topics,
numbered A, B and C - he is totally blank about the other topics.
This means Ramu can only win the contest if he gets the topics A, B or C to speak about.
On the contest day, Ramu gets topic X.
Determine whether Ramu has any chances of winning the competition. 
Print "Yes" if it is possible for Ramu to win the contest, else print "No".*/
	
	#include<stdio.h>
	int main()
	{
		char x;
		printf("enter topic:: ");
		scanf("%c",&x);
		if(x=='A'||x=='B'||x=='C')
		{
			printf("Yes\n");
		}
		else 
		{
			printf("No\n");
		}
		return 0;
	}