/* ********* Assignement 1 **********
    ********* EX3: Programme to find the largest number among tree numbers ******** */
    


#include <stdio.h>

main()
{
	float a,b,c;
	
	printf ("Enter tree numbers : ");
	scanf("%f%f%f",&a,&b,&c);
	
	if (a>b && b>c )
	{
		printf("The largest one is: %.2f",a);
	} 
	else if (b>a)
	{
		if (b>c)    printf("The largest one is: %.2f",b);
		else        printf("The largest one is: %.2f",c);
	}  
	
}
