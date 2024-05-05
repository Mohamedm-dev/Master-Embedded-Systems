/* ********* Assignement 1 **********
    ********* EX4: check whether a number is positive or negative   ******** */
    


#include <stdio.h>

main()
{
	float a,b,c;
	
	printf ("Enter tree numbers : ");
	scanf("%f",&a);
	
	if (a>0)
		printf("%.2f is positive ",a);
	
	else if (a<0)
		printf("%.2f is negative ",a);  
	
	else if (a==0)
		printf("%f is null ",a); 	 
	
	
}
